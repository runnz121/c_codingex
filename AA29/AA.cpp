#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int main()	{	
	freopen("input.txt", "rt",stdin);
	
	int n, tmp, i, cnt=0, digit;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		tmp = i;							//i가 계속 돌아야되기 때문에 tmp에 임시저장  
		
		while(tmp>0){						//tmp가 0이면 while문 종료  
			digit = tmp%10;					//각 자리수를 digit 변수에 담는다. 일의 자리수가 담긴다   
			if(digit ==3) cnt++;			//들어간 수가 3인 경우를 확인 
			tmp=tmp/10;						//몫을 분리  
		
		}
	}
	
	printf("%d", cnt); 
	

	return 0;
}
