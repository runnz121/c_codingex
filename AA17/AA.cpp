#include <stdio.h>

using namespace std;

int main() {
	
	 
	
	freopen("input.txt","rt",stdin);
	int n, sum=0, i, j, m, ans;				//n = 전체 test수	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)						//도는 testcase 수  
	{
		scanf("%d %d", &m, &ans);			//숫자와, 답을 한번에 받는다  
	
		sum=0;								//학생마다 초기화 시켜줘야됨  
		
		for(j=1; j<=m; j++)					//그 학생이 받은 카드의 숫자의 합  
		{
			sum+=j;							//이 sum 이 ans와 같아야함  
			
		}
		
		if(ans==sum)
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	
	
	
	
	}
	
	
	
	
	
	return 0;
}
