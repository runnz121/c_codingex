#include <stdio.h>

int main(){
	int max = -2147483648;
	int result = 0;
	char ar1[101];
	int check[10] = {0,};

	int n,j,i,idx;
	
	
	scanf("%s", &ar1);
	
	for(i = 0; ar1[i] != '\0'; i++){
		idx = ar1[i] - 48;
		check[idx]++;
	}
	for(i = 0; i <= 9; i++){
		if(check[i] >= max){
			max = check[i];
			result = i;
		}
	}
	printf("%d\n", result);

	return 0;
}



