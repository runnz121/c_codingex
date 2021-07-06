#include <stdio.h>

int digit_sum(int x){
	int sum = 0;
	int i;
	
	if(x < 0){
		return sum;
	}else{
		sum += x%10;
		x = x/10;
	}
	return 0;
}

int main(){
	int res = 0;
	int max = -2147483648;
	int n,m,i;
	
		scanf("%d", &n);
		
	for(i = 0; i < n; i++){
		scanf("%d", &m);
	}
	res = digit_sum(m);	
	
	if(m > max){
		max = m;
	}
	
	printf("%d", max);	
	
	return 0;
}
