// 여는괄호 ( 는 push
// 닫는괄호 ) 는 pop
// 을 구현하여 완벽한 괄호 닫기면 모든 스택은 비어있어야 한다 
// or 꺼낼 닫는 괄호가 없는 경우는 잘못 됨  


#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);	 
	
	stack<char> s;								//괄호이기 때문에 char형  
	char a[50];
	int i, flag =1;
	
	scanf("%s", &a);
	for(i=0; a[i]!='\0'; i++) {	
		if(a[i]=='(') s.push(a[i]);				//여는 괄호일 경우 스택에 넣는다  
		else{
			if(s.empty()){						//닫는 괄호를 만났는데 스택이 비어있는 경우 (스택이 비어있는 경우가 참인 경우 ) 
				printf("NO\n");					//닫는 괄호가 없는데 출력하게 되는 것임으로 바로 출력  
				flag =0;					
				break;
			}
			else s.pop();
		}
	}
	if(s.empty() && flag ==1) printf("YES\n");	//정상적으로 종료된 경우  
	else if(!s.empty() && flag ==1) printf("NO\n");						//정상적으로 종료되어도 스택에 남아있는 경우  
	
	
	
	return 0;
} 
