
#include <stack>  						//라이브러리에서 지원하는 stack 구조  
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);	 
	int n, k;
	
	stack<int> s;						//스택 선언  
	
	char str[20]="0123456789ABCDEF";	
	
	scanf("%d %d", &n, &k);
	
	while(n>0){
		s.push(n%k);					//스택 자료구조에 넣기 
		n=n/k; 
	}
	
	while(!s.empty()){					//empty() : 스택이 비어있으면 참 아니면 거짓 그런데 not 연산자 씀으로서 비어있지 않으면 참이 된다로 바뀜  
		printf("%c", str[s.top()]);		//스택에 맨 위에있는 자료를 '참조'만 한다 
		s.pop();						//참조한 자료를 꺼낸다  
	}
	

	return 0;
}
