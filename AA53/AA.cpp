//stack 

//push, pop���� �ְ� ���� 
//�⺻ �����͸� -1 �� �ʱ�ȭ 
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int stack[100], top=-1; 				//top : �ε��� ����  

void push(int x){
	stack[++top]=x; 					//�����ϰ� ��� ���� ������ �׻� �� ��(�ֱ� �ڷḦ ����Ų��) 
} 
int pop(){								//�Ű����� ���� 
	return stack[top--];				//top�� �������� ���� �ڷ�� �������ٰ� ����  
}

int main() {
	freopen("input.txt", "rt", stdin);
	int n, k;
	char str[20]="0123456789ABCDEF";	//16������ ���� ���� ���  
	scanf("%d %d", &n, &k); 
	while(n>0){
		push(n%k);
		n=n/k;
	}
	while(top!=-1){						//top�� -1�̸� �� ���°�  
		printf("%c", str[pop()]);		//char �迭�̿��� ""%c"�� ���� �Ѵ�  
	}
	

	return 0;
}
