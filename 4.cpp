#include <stdio.h>

int main(){
	
	int n, i, m, max = -2147483647, min = 2147483647,sum;
	
	scanf("%d", &m);
	
	for(i = 1; i<=m; i++){
		scanf("%d", &n);
		
		if(n > max) max = n;
		if(n < min) min = n;
	}
	
	sum = max-min;
	printf("%d", sum);

	return 0;
}

