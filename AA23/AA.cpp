#include <stdio.h>

int main()	{
	freopen("input.txt", "rt", stdin);
	int n, i, pre, now, cnt, max;
	
	scanf("%d", &n);
	scanf("%d", &pre);								//��Ŀ������ pre�� now�� ���Ͽ� cnt�� ������Ű�� ����̴�. ���� �迭�� ��ó���� ���Ұ��� �־�� �񱳰���.  
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
	
