#include <stdio.h>

using namespace std;

int ch[10]; 										//각 자리수 count하기 위한 배열  

int main() {
	
	freopen("input.txt","rt",stdin);
	int i, digit, max=-2147000000, res;
	char a[101]; 									//입력 받은 최대 값 걸러낼 숫자  
	
	scanf("%s", &a); 								//%s로 해야 string으로 입력 받을 수 있다  
	
	for(i=0; a[i]!='\0'; i++ )						//string으로 0번 인덱스부터 읽는다는 것을 잊지말자  
	{
		digit=a[i]-48;								//아스키넘버 -> 실제 숫자화  
		ch[digit]++;								
													//ch(int) 배열 => 0 1 2 3 4 5 6 7 8 9 
													//   기본         0 0 0 0 0 0 0 0 0 0  -> digit ++ 하면 여기가 1씩 증가 즉 이게 각 숫자의 갯수 
		
	}
	
	for(i=0; i<=9; i++){							//cnt 값이 같을 경우 큰 값을 출력하게끔 교체    
		if(ch[i]>=max){								//3의 cnt 가 5 이고 5의 cnt도 5 인 경우 5가 출력되어야 하기 때문에 현재 max 가 3 인 상태일때 
			max=ch[i];								//3을 5로 바꿔줌  
			res=i;
		}
	} 
	
	printf("%d\n", res);
	return 0;
}
