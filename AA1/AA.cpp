#include <iostream>



using namespace std;

int main() 


{
	int n, m, i, sum=0;
	
	cin >>n>>m; 				//���� 2�� �ޱ�
	
	for(i = 1; i<=n; i++ ){		//�Է¹��� �� ����  
		if(i%m==0){				//�������� 0 �� ���  = �� ���  
			sum = sum+i;			
		}	
	}
	cout <<sum<< endl;
	 
	return 0;
}
