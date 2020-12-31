// 원래는 stack을 사용하는 문제 
// cnt = 0으로 초기화 시킨 후 '(' 여는 괄호 = cnt +1, ')'닫는괄호 = cnt -1로 설정 따라서 총 합이 0이 되면 정상으로 닫힌걸로 본다 가 전제 조건.... 
// 그러나 -1 이 1번이라도 나오는 경우 break;함(마지막값은 0 이여도 -1이 나온다는 건 닫는 괄호가 많다는 의미 즉 '...) ( ' 로 끝나는 경우 -1 0 이 출력될수있다.) 


#include <stdio.h>

using namespace std;

int main() {
	
	freopen("input.txt","rt",stdin);
	char a[100];							//변수를 담을 문자열 배열 
	  
	int i, cnt = 0;
	
	scanf("%s", &a); 						//문자열 입력 받음  
	
	for(i=0; a[i]!='\0'; i++)
	{
		if(a[i]=='(') 						//열린 괄호일 경우  
		{
			cnt++;							//증가 
		}else if(a[i]==')') 				//닫힌 괄호일 경우 
		{
			
			cnt--; 							//감소 
		}
		if(cnt<0)							
		{
			break;							//위 계산중 한번이라도 cnt가 음수가 나오는 경우 바로 종료 (이유는 위에서 설명)  
		}		
	}										//for문 끝   
	
	
	
	
	if(cnt ==0) 
	{
	printf("YES\n"); 						//정상적으로 계산되어서 cnt = 0인 경우 yes 
	}
	else
	{
	printf("NO\n"); 						//break를 포함한 비정상인 경우 no 
	}
	
	
	
	return 0;
}
