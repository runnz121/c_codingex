// ���°�ȣ ( �� push
// �ݴ°�ȣ ) �� pop
// �� �����Ͽ� �Ϻ��� ��ȣ �ݱ�� ��� ������ ����־�� �Ѵ� 
// or ���� �ݴ� ��ȣ�� ���� ���� �߸� ��  


#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);	 
	
	stack<char> s;								//��ȣ�̱� ������ char��  
	char a[50];
	int i, flag =1;
	
	scanf("%s", &a);
	for(i=0; a[i]!='\0'; i++) {	
		if(a[i]=='(') s.push(a[i]);				//���� ��ȣ�� ��� ���ÿ� �ִ´�  
		else{
			if(s.empty()){						//�ݴ� ��ȣ�� �����µ� ������ ����ִ� ��� (������ ����ִ� ��찡 ���� ��� ) 
				printf("NO\n");					//�ݴ� ��ȣ�� ���µ� ����ϰ� �Ǵ� �������� �ٷ� ���  
				flag =0;					
				break;
			}
			else s.pop();
		}
	}
	if(s.empty() && flag ==1) printf("YES\n");	//���������� ����� ���  
	else if(!s.empty() && flag ==1) printf("NO\n");						//���������� ����Ǿ ���ÿ� �����ִ� ���  
	
	
	
	return 0;
} 
