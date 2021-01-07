//2차원 배열 
//입력은 a[51][51] 로 받으면 바깥쪽은 자연스럽게 0으로 채워진다  
//12시방향 a[i-1[[j]
//3시방향 a[i][j+1]
//6시방향 a[i+1][j]
//9시방향 a[i][j-1]
//a[행][열] 
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int a[52][52];
int dx[4] = {-1,0,1,0};								//방향 배열을 x,y를 만들어 i에 더한다  
int dy[4] = {0,1,0,-1};								//위와 마찬가지 역할이면서 j에 더한다  => dx -1, dy 0 을 각 배열에 더하면 이때는 12시방향을 보는것 이런식으로 확인  
int main() {	
	freopen("input.txt", "rt", stdin);	
	int n, i, j, k, cnt=0,flag;						//k => 방향배열 더하기 위해  
	scanf("%d", &n);
	
	//이중for문으로 2차원 배열 입력 받음  
	for(i=1; i<=n; i++){							//1부터 넣어야 함, 가장자리는 0으로 사용  
		for(j=1; j<=n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	
	for(i=1; i<=n; i++){					  
		for(j=1; j<=n; j++){
			flag=0;
			for(k=0; k<4; k++){
				if(a[i][j]<=a[i+dx[k]][j+dy[k]]){	//k를 dx, dy에 더해서 방향을 바꿔보면서 확인시킴  
					flag =1;						//상하좌우를 확인하면서 같거나 작은게 있으면 flag=1이 됨  
					break;
				}
			}
			if(flag==0){							//상하좌우에 나보다 높은게 없어 flag가 그대로인 경우  
				cnt++;
			}
		}
	}
	
	printf("%d\n", cnt);
	return 0;
}

/*
백터로 2차원 배열잡기

	   			    	행크기			  열크기(0으로초기화하기)  
vector<vector<int>> map(n+2, vector<int> (n+2,0));
	  에러발생시 >>사이한칸띄기

*/
