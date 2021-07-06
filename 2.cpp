#include <stdio.h>


int main(){
	int n,m,i,sum = 0;
	
	scanf("%d %d", &n, &m);
	for(i = n; i <=m; i++){
		printf("%d", i);
		printf(" + ");
		sum += i;
		if(n == m){
			break;
		}		
	}
	

	printf(" = ");
	printf("%d", sum);
	return 0;
}
