//펙토리얼로 곱해지는 수를 소인수 분해 하고 그 중에 2와 5가 몇게 있는지 확인  
//그러면 10을 곱하는 것이기 때문에 이것의 갯수로 0의 갯수 파악 가능  


#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int main()	{	
	freopen("input.txt", "rt",stdin);
	int n, i, j,tmp, cnt1=0, cnt2=0;
	
	scanf("%d", &n);
	
	for(i=2; i<=n; i++){
		tmp=i;
		j=2;
		while(1){
			if(tmp%j==0){
				if(j==2) cnt1++;
				else if(j==5) cnt2++;
				 tmp=tmp/j;
			}
			
			else j++;		
			
			if(tmp==1) break;
			
		}
	}
	
	if(cnt1<cnt2) printf("%d\n", cnt1);
	else printf("%d\n", cnt2);
	
	
	
	
	return 0;
}
