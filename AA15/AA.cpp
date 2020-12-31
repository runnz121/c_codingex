#include <stdio.h>

using namespace std;

int main() {
	
	freopen("input.txt","rt",stdin);
	int n,i,j,flag,cnt=0;
	
	scanf("%d", &n);
	
	for(i=2; i<=n; i++){				//1은 소수가 아니기 때문에  
		flag=1;							//소수인지 아닌지 신호변수 부여 flag가 1 인 경우 를 소수로   
		for(j=2; j*j<=i; j++){			//>>> 범위를 j*j로 한다 = 제곱근 효과 ex)36일 경우 최대 6*6을 기준으로 다시 증감하기 때문에 제곱근까지만 돌린다면 그 전의 숫자들은 약수가 존재함을 알 수 있다  
			if(i%j==0){					//이 경우 j = i의 약수 -> 소수가 아니다 
				flag=0;					//소수가 아님을 0으로 하고 끝냄 
				break;				
			}
		}		
	
		if(flag ==1)
		{
			cnt++;
		}
	}
	printf("%d\n", cnt);

	
	
	return 0;
}
