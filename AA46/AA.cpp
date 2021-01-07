#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int a[2001];
int main() {
	freopen("input.txt", "rt", stdin);
	int n, k, i, p=0, cnt=0, tot=0;				//tot = 총 작업시간 , p =position 
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		tot=tot+a[i];							//총작업시간 설정  
	}				
	
	scanf("%d", &k);
	if(k>=tot){
		printf("-1\n");							//모든 작업시간이 끝남
		return 0; 
	}
	
	while(1){
		p++;									
		if(p>n) {								//배열 회전  작업갯수   
			p=1;								//
		}
		if(a[p]==0){							//0인경우(작업모두 완료 ) 
			continue;							//그냥 지나간다 
			a[p]--;								//작업 감소  
			cnt++;								//1초 증가 
		}
		if(cnt==k)								//정전때 
		{	
			break;								//while 종료 
		 } 
	}
	
	while(1){
		p++;
		if(p>n){
			p=1;
		}
		if(a[p]!=0){							//아직 작업이 남아있는 경우  
			break;
		}
	}
	printf("%d\n",p);
	
	
	
	
	
	return 0;
}
