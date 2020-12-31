
#include <stdio.h>

using namespace std;

int main() {
	
	freopen("input.txt","rt",stdin);
	
	char a[100];							//입력받은 문자숫자를 배열에 넣기 위한 초기화  
	int res = 0, cnt=0, i;					//res = 자연수 출력, cnt = 약수 갯수 초기화, i = for문을 위한 초기화  
	
	scanf("%s", &a);
	
	for(i = 0; a[i]!='\0'; i++ )			//문자열 배열에는 맨 마지막인덱스값으로 null 문자 \0이 숨겨져있다(문자열의 끝을 알림). a[i]!='\0'이렇게 적으면 문자열 길이만큼 읽게 되는것  
	{
		if(a[i]>=48 && a[i] <= 57)		    //asci code 48 ~ 57 이 숫자범위임으로 이것으로 문자배열에서 숫자만을 고르게 된다   
		{
			res = res*10+(a[i]-48);			//문자로 읽힌 숫자의 아스키코드 숫자에서 48을 빼줌으로서 숫자타입으로 바꿔주면서 동시에 숫자를 이어 자연수로 바꿔준다  
			
		}
	}
	printf("%d\n", res);
	
	
											//약수갯수 출력  
	for(i = 1; i <=res; i++)
	{
		if(res%i ==0) cnt ++;
	 } 
	 printf("%d\n", cnt);
	
	
	return 0;
}
