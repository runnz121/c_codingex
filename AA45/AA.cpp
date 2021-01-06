//배열을 만들어놓고 0으로 초기화 시킴
//pos하나 지정
//3일때 1증가시킴
//즉 1 2 3 4 5 6 7 8 
//c= 0 0 1 0 0 0 0 0
//c= 0 0 1 0 0 1 0 0 -> pos가 c=1인것을 만나면 다시 초기화 
//pos가 9를 만나는 순간(마지막 원소)다시 첫번째 인덱스로 가게끔 초기화 
//이런식으로 c가 0인것만 count 하되 3번째 것을 1로 바꿔줌  


#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
	freopen("input.txt", "rt", stdin);
	
	int n, k, pos=0, i, bp=0, cnt=0; 					//bp = n-1인 경우 끝냄  
	
	scanf("%d %d", &n, &k);
	vector<int> prince(n+1);							//1번부터 n번까지 배열 생성 
	
	while(1){
		pos++;
		if(pos>n) {										//pos가 9가되는 순간(8까지 있을때) 즉 한바퀴 다 돌았을 때 다시 while문 돌게끔 지정  
			pos=1;
		} 
		if(prince[pos]==0){
			cnt++;
			if(cnt==k){									//3번째 인 경우  
				prince[pos]=1;							//1로 지정함으로 break(while문 ) => 해당 조건에 만족하는 왕자 아웃 시킴  
				cnt=0;									//다시 0으로 초기화하여 처음부터 3센다  
				bp++;									//8명중 1명 아웃 따라서 7남음  
			}
		}
		if(bp==n-1){									//bp증가할때마다 왕자 한명씩 아웃  
			break;
		}
	} 
	for(i=1; i<=n; i++){
		if(prince[i]==0){								//prince가 0인사람( 즉 마지막으로 살아있는 왕자)  
			printf("%d\n",i);
			break;
		}
	}
	
	
	
	return 0;
}
