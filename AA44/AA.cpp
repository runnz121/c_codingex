//43번 응용(결정알고리즘)  
//1~9 더 해서 2로 나눈 5 (여기서 5는 가장 인접한 두 말의 거리)
//무조건 첫번째 마구간에 말 한마리 배치
//그 다음 마구간과의 거리를 뺌 그 거리가 5보다 크거나 같은지 확인 
//안되면 그 다음 마구간과의 거리를 구함 그러면 말을 넣는다
//그러면 두번째 마구간(마지막 넣은 마구간) 과 그 다음 마구간과의 거리를 구한다  
//이런식으로 계산하여 넣을 수 있는 말이 3마리 이상이면 5는 답 아니면 오답 
//그러면 답은 1~4 사이에 있다 가정 그러면 5/2 해서 2라고 가정하고 반복 
 

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int n; 
int Count(int len, int x[]){
	int i, cnt=1, pos=x[1];					//pos=x[1] -> 첫번째 말이 들어간 마구간 좌표  
	for(i=2; i<=n; i++){					//2번째 좌표부터 확인  
		if(x[i]-pos>=len){					//2번째 - 1번째 마구간 좌표 뺀것이 len(가장 인접한 마구간의 거리 차이)  
						 
			cnt++;							//들어간 말의 수 			
			pos=x[i];						//마지막으로 들어간 마구간의 좌표로 초기화  
		}
	}
	return cnt;								//최종적으로 모두 들어간 말의 수  
}






int main() {
	freopen("input.txt", "rt", stdin);
	int m,i,lt=1,rt,mid,res;
	scanf("%d %d", &n, &m);
	
	int *x = new int[n+1];					//동적으로 포인터를 사용해서 1차원 배열 생성  
	for(i=1; i<=n; i++){
		scanf("%d", &x[i]);
	}
	sort(x+1, x+n+1);						//처음주소 ~ 마지막 주소  
	rt=x[n];								//rt에 마지막 좌표 넣는다  
	while(lt<=rt){
		mid=(lt+rt)/2;
		if(Count(mid, x)>=m){				//3마리 이상이 들어오면 정답(m 값)  		
			res=mid;						//위의 조건이 참이면 res를 해당 값으로 갱신  
			lt=mid+1;						//더 큰 값이 있는 범위로 lt 조절  
		}
		else {
			rt=mid-1;						//bool 인경우 작은 값이 있는 범위로 조절  
		}
	}
	printf("%d\n",res);
	delete[] x;								//동적으로 메모리 배열시 꼭 해제 해주어야 한다  

	return 0;
}
