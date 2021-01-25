//stack 

//push, pop으로 넣고 뺀다 
//기본 포인터를 -1 로 초기화 
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int stack[100], top=-1; 				//top : 인덱스 역할  

void push(int x){
	stack[++top]=x; 					//증가하고 들어 갔기 때문에 항상 맨 위(최근 자료를 가르킨다) 
} 
int pop(){								//매개변수 없음 
	return stack[top--];				//top이 내려가면 전의 자료는 지워졌다고 생각  
}

int main() {
	freopen("input.txt", "rt", stdin);
	int n, k;
	char str[20]="0123456789ABCDEF";	//16진수를 찍을 때를 고려  
	scanf("%d %d", &n, &k); 
	while(n>0){
		push(n%k);
		n=n/k;
	}
	while(top!=-1){						//top이 -1이면 다 나온것  
		printf("%c", str[pop()]);		//char 배열이여서 ""%c"로 찍어야 한다  
	}
	

	return 0;
}
