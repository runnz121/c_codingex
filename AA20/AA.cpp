//비겼을 경우와 A가 이겼을 경우만 if - else if로 처리하고 나머지는
//B가 이겼을 경우로 처리  

#include <stdio.h>

int main() {
	
	freopen("input.txt","rt",stdin);	
	int n, a[101], b[101],i,k;
	
	scanf("%d", &n);
	

	for(i=1; i<=n ;i++)					//배열 A에 A에 관한 정보 저장  
	{
		scanf("%d", &a[i]);
				
	}
	
	for(i=1; i<=n ;i++)					//배열 B에 B에 관한 정보 저장  
	{
		scanf("%d", &b[i]);
				
	}
	
	for(i=1; i<=n; i++)
	{
		if(a[i]==b[i]){
			printf("D\n");
		} 
		else if(a[i]==1 && b[i]==3) 
		{
			printf("A\n");
		}
		else if(a[i]==2 && b[i]==1)
		{
			printf("A\n");
		}
		else if(a[i]==3 && b[i]==2)
		{
			printf("A\n");
		}else
		{
			printf("B\n");
		}
		
		
	}
	
	
	
	
	
	/*
	
	for(k=1; k<=n; k++){
	
	
	if((a[i]-b[i])==1)
	{
		printf("A\n");
	}
	else if((a[i]-b[i])==2)
	{
		printf("B\n");
	}
	else if((a[i]-b[i])==-1)
	{
		printf("B\n");
	}
	else if((a[i]-b[i])==0)
	{
		printf("D\n");
	}
	else
	{
		printf("A\n");
	}
}*/
	
	
	
	
	
	
	return 0;
}
