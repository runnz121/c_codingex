//연속적으로 울리는 횟수를 max값으로생각하여 이것을 출력  



#include <stdio.h>


int main() {	
	freopen("input.txt","rt",stdin);
	
	int n, a, val, i, cnt=0, max=-2147000000;
	
	scanf("%d %d", &n, &val);
	
	for(i=1; i<=n; i++){
		scanf("%d", &a);
		if(a>val)
		{
			cnt++;
		}else
		{
			cnt=0;								//연속된 초를 구해야 하기 때문에 cnt =0으로 초기화 되어야 한다.  
		}
		
		if(cnt>max)
		{
			max=cnt;							//연속으로 증가한 cnt의 최대값을 구하는법  
		}
	}
	if(max==0)									//경보음이 한번도 안울린 경우  
	{
		printf("-1\n");
	}else
	{
		printf("%d", max);
	}
	
	return 0;
}
