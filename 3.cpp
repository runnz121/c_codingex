#include <stdio.h>

int main(){
	int m,n,i,sum = 0;
	
	scanf("%d", &m);
	
	for(i=1; i<m; i++){

		if(m%i == 0){
			printf("%d", i);
			if(i < m/2){
				printf(" + ");
			}
			sum += i;
		}
	}
	
	printf(" = ");
	printf("%d", sum);

	return 0;
}

