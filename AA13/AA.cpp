#include <stdio.h>

using namespace std;

int ch[10]; 										//�� �ڸ��� count�ϱ� ���� �迭  

int main() {
	
	freopen("input.txt","rt",stdin);
	int i, digit, max=-2147000000, res;
	char a[101]; 									//�Է� ���� �ִ� �� �ɷ��� ����  
	
	scanf("%s", &a); 								//%s�� �ؾ� string���� �Է� ���� �� �ִ�  
	
	for(i=0; a[i]!='\0'; i++ )						//string���� 0�� �ε������� �д´ٴ� ���� ��������  
	{
		digit=a[i]-48;								//�ƽ�Ű�ѹ� -> ���� ����ȭ  
		ch[digit]++;								
													//ch(int) �迭 => 0 1 2 3 4 5 6 7 8 9 
													//   �⺻         0 0 0 0 0 0 0 0 0 0  -> digit ++ �ϸ� ���Ⱑ 1�� ���� �� �̰� �� ������ ���� 
		
	}
	
	for(i=0; i<=9; i++){							//cnt ���� ���� ��� ū ���� ����ϰԲ� ��ü    
		if(ch[i]>=max){								//3�� cnt �� 5 �̰� 5�� cnt�� 5 �� ��� 5�� ��µǾ�� �ϱ� ������ ���� max �� 3 �� �����϶� 
			max=ch[i];								//3�� 5�� �ٲ���  
			res=i;
		}
	} 
	
	printf("%d\n", res);
	return 0;
}
