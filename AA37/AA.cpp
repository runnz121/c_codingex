#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int c[20];										//캐쉬메모리 배열 초기화 = 0 
int main() {
	freopen("input.txt", "rt", stdin);
	int s, n, a, i, j, pos;
	
	scanf("%d %d", &s, &n);
	
	
	for(i=1; i<=n; i++){
		scanf("%d", &a);
		
		pos=-1;									//miss 인 경우를 고려해서 -1로 초기화 miss면 pos는 -1그대로 이기 때문 -> 즉 아래 for 문을 돌지 않음  
		
		for(j=0; j<s; j++){						//HIT 인지 MIss 인지 판단  
			if(c[j]==a){						//a작업이 캐시에 있는 경우 cache hit  (즉 들어온 작업이 이미 캐시에 존재하는 경우 ) 
				pos=j;							//pos에 a가 있는 j인덱스 저장 (hit된 지점) 
			}
		}
		
		if(pos==-1){							//miss 인 경우 -1인 상태임으로 이 for 문을 돈다  
			for(j=s-1; j>=1; j--){
				c[j]=c[j-1];
			}
		}
		else{									//hit인 경우 이 for문을돈다  
			for(j=pos; j>=1; j--){
				c[j]=c[j-1];
			}
		}
		
		c[j]=a;									//저장한 값을 cache 배열에 대입  
	}
	
	
	
	for(i=0; i<s; i++){
		printf("%d ", c[i]);
	}

	
	

	
	
	
	return 0;
}
