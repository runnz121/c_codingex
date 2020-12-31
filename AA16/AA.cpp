//배열을 두개 선언
//각 배열 크기는 52로 동일
//여기서 배열 원소로 1~26번까지는 대문자 부여, 27~52까지는 소문자 부여
//아스키코드에서 65번부터 대문자임으로 64를 빼주어 대문자 A를 배열 1인덱스에 넣어준다  (65~90)
//소문자는 아스키코드에서 97~122인데 여기서 70을 빼주어 27부터 들어가게 한다 
//두 배열을 비교해서 모든 배열이 같은 원소에 같은 수 만큼 cnt 증가했다면 두 배열의 문자열은 서로 아나그램  

#include <stdio.h>
#include <algorithm>					//exit 함수를 위한 include 
 
int a[60], b[60];
using namespace std;

int main() {
	freopen("input.txt","rt",stdin);
	char str[100];
	int i;
	
	scanf("%s", &str);					//첫번쨰 배열 a 
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			a[str[i]-64]++; 				//이렇게 하면 A 갯수 ++ 
		}
		else {a[str[i]-70]++;				//이렇게 하면 소문자 ++ 
		}
	}
	
	
	 
	scanf("%s", &str);					//두 번쨰 배열 b  
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			b[str[i]-64]++; 				//이렇게 하면 A 갯수 ++ 
		}
		else {b[str[i]-70]++;				//이렇게 하면 소문자 ++ 
		}
	}
	
										//두 배열 a와 b가 서로 같은지 확인하는 for문  
	for(i=1; i<=52; i++){				//전체배열을 탐색 
		if(a[i] != b[i]){					//두 배열이 다를 경우  
			printf("NO\n");
			exit(0);					//프로그램 종료  #inlcude <algorithm> 해줘야 가능하다  
			
		
		}
	}
	
	printf("YES\n");					//따로 출력되는게 없이 정상 종료일 경우 두 배열은 아나그램임으로 이게 출력  
	
	
	
	
	return 0;
}
