#include <stdio.h>

using namespace std;

int reverse(int x){						//main 함수의 num 
	int res=0, tmp;	
							
										//	x		res=0
	while(x>0){							// 3700		  0
		tmp=x%10;						// 370		  0
		res=res*10+tmp;					// 37		  7
		x=x/10;							// 3		  73
	}									// 0
	return res;							
	
} 

bool isPrime(int x){					//x = tmp =뒤집은 숫자 
	
	int i;
	if(x==1) 
	{
	return false;
	}				//x=1인 경우를 고 
	

	bool flag=true;						//flag를 true로 초기화 
	for(i=2; i<x; i++){					//2부터 자기 자신 숫자 전까지 약수가 있는지 확인  
		if(x%i==0){						//약수가 있으면 
			flag=false;					//flag를 flase로 변환  
			break;
		}
	}
	return flag;						//만일 소수인 경우 flag를 true로 반환  
}



int main() {
	
	freopen("input.txt","rt",stdin);
	
	int n, num, i, tmp;
	
	scanf("%d", &n);					//총 몇개를 입력 받을 것인지 
	for(i=1; i<=n; i++){
		scanf("%d", &num);				//각각의 숫자를 입력 받는다 
		tmp=reverse(num);				//뒤집는 함수 reverse 
		if(isPrime(tmp)){
		
			printf("%d ", tmp);
		}
		
	}
	
	
	return 0;
}
