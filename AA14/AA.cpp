#include <stdio.h>

using namespace std;

int reverse(int x){						//main �Լ��� num 
	int res=0, tmp;	
							
										//	x		res=0
	while(x>0){							// 3700		  0
		tmp=x%10;						// 370		  0
		res=res*10+tmp;					// 37		  7
		x=x/10;							// 3		  73
	}									// 0
	return res;							
	
} 

bool isPrime(int x){					//x = tmp =������ ���� 
	
	int i;
	if(x==1) 
	{
	return false;
	}				//x=1�� ��츦 �� 
	

	bool flag=true;						//flag�� true�� �ʱ�ȭ 
	for(i=2; i<x; i++){					//2���� �ڱ� �ڽ� ���� ������ ����� �ִ��� Ȯ��  
		if(x%i==0){						//����� ������ 
			flag=false;					//flag�� flase�� ��ȯ  
			break;
		}
	}
	return flag;						//���� �Ҽ��� ��� flag�� true�� ��ȯ  
}



int main() {
	
	freopen("input.txt","rt",stdin);
	
	int n, num, i, tmp;
	
	scanf("%d", &n);					//�� ��� �Է� ���� ������ 
	for(i=1; i<=n; i++){
		scanf("%d", &num);				//������ ���ڸ� �Է� �޴´� 
		tmp=reverse(num);				//������ �Լ� reverse 
		if(isPrime(tmp)){
		
			printf("%d ", tmp);
		}
		
	}
	
	
	return 0;
}
