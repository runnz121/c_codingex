#include <stdio.h>

using namespace std;

int main() {
	
	freopen("input.txt","rt",stdin);
	int n,i,j,flag,cnt=0;
	
	scanf("%d", &n);
	
	for(i=2; i<=n; i++){				//1�� �Ҽ��� �ƴϱ� ������  
		flag=1;							//�Ҽ����� �ƴ��� ��ȣ���� �ο� flag�� 1 �� ��� �� �Ҽ���   
		for(j=2; j*j<=i; j++){			//>>> ������ j*j�� �Ѵ� = ������ ȿ�� ex)36�� ��� �ִ� 6*6�� �������� �ٽ� �����ϱ� ������ �����ٱ����� �����ٸ� �� ���� ���ڵ��� ����� �������� �� �� �ִ�  
			if(i%j==0){					//�� ��� j = i�� ��� -> �Ҽ��� �ƴϴ� 
				flag=0;					//�Ҽ��� �ƴ��� 0���� �ϰ� ���� 
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
