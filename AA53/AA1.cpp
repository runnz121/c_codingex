
#include <stack>  						//���̺귯������ �����ϴ� stack ����  
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);	 
	int n, k;
	
	stack<int> s;						//���� ����  
	
	char str[20]="0123456789ABCDEF";	
	
	scanf("%d %d", &n, &k);
	
	while(n>0){
		s.push(n%k);					//���� �ڷᱸ���� �ֱ� 
		n=n/k; 
	}
	
	while(!s.empty()){					//empty() : ������ ��������� �� �ƴϸ� ���� �׷��� not ������ �����μ� ������� ������ ���� �ȴٷ� �ٲ�  
		printf("%c", str[s.top()]);		//���ÿ� �� �����ִ� �ڷḦ '����'�� �Ѵ� 
		s.pop();						//������ �ڷḦ ������  
	}
	

	return 0;
}
