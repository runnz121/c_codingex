//����� ���� A�� �̰��� ��츸 if - else if�� ó���ϰ� ��������
//B�� �̰��� ���� ó��  

#include <stdio.h>

int main() {
	
	freopen("input.txt","rt",stdin);	
	int n, a[101], b[101],i,k;
	
	scanf("%d", &n);
	

	for(i=1; i<=n ;i++)					//�迭 A�� A�� ���� ���� ����  
	{
		scanf("%d", &a[i]);
				
	}
	
	for(i=1; i<=n ;i++)					//�迭 B�� B�� ���� ���� ����  
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
