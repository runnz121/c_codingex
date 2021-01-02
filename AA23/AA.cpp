#include <stdio.h>

int main()	{
	freopen("input.txt", "rt", stdin);
	int n, i, pre, now, cnt, max;
	
	scanf("%d", &n);
	scanf("%d", &pre);								//메커니즘은 pre와 now를 비교하여 cnt를 증가시키는 방법이다. 따라서 배열의 맨처음의 원소값이 있어야 비교가능.  
	cnt=1;
	max=1;
	
	for(i=2; i<=n; i++){
		scanf("%d", &now);
		
		if(now>=pre){
			cnt++;			
			if(cnt>max){
				max = cnt;
			}
				
		
		}else
		
			cnt=1;
			pre=now;
			
			
	}
	printf("%d\n", max);
	return 0;
}


/*	
	int n, i, cnt=0, max=-2147000000, sum=0;
	
	scanf("%d", &n);
	vector<int> a(n);
	
	
	for(i=0; i<n; i++){
		scanf("%d", a[i]);		
	}
	
	for(i=0; i<n; i++){
		
		if(a[i] < a[i+1] || a[i]==a[i+1]){
			
			cnt++;
			sum+=cnt;
			max=sum;
			
		} else{
			cnt=0;
			sum=0;
		}
		
	}

	printf("%d",&max);
	
	*/
	
