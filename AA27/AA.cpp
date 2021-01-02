//ch배열을 만들어서 팩토리얼의 원소를 소인수 분해하여
//초기화된 값에서 ++시켜준다  

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int main()	{	
	freopen("input.txt", "rt",stdin);
	int i,j,n,tmp;
	scanf("%d", &n);
	vector<int>	ch(n+1);				//n이 출력되어야 하기 때문에 n+1로 잡음 
	
	for(i=2; i<=n; i++){
		tmp = i;						//i를 tmp에 임시 저장for문을 i로 돌리는데, i값이 변경되면 for문이 안돌 기 때문에 임시 저장  
		j=2;							//n을  소인수 분해시킬 j 
		while(1){						//while무한으로 돌리기 위함 
			if(tmp%j==0){				//임시변수에 저장해두었던 tmp(i)를 j로 나누어서 떨어지면 ex) 60(i) / 2(j) 
				tmp=tmp/j;				//tmp에는 j로 나눈 몫을 대입 시켜 놓는다.(위의 조건에서) 
				ch[j]++;				//그리고 초기화된 배열의(vector ch배열은 0으로 초기화되어있음)  해당 j의 원소가 있기 때문에 ch원소를 증가시킨다. 
										//나눠떨어지는 경우 j증가없이 계속 돈다 
			}
			else{
				j++;					//나눠떨어지지 않는 경우 j증가 
			}
			if(tmp==1){					//소인수 분해 계속하여 몫이 1이되면 종료  
				break;
			}
		}
	}
	
	printf("%d! = ", n);
	for(i=2; i<=n; i++){
		if(ch[i]!=0){
			printf("%d ", ch[i]);
		}
	}
	
	
	
	
	return 0;
}
