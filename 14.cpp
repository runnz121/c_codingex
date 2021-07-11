#include <stdio.h>


int reverse(int x){
	int res = 0;
	int idx;
	
	while(x > 0){
		idx = x%10;
		res = res*10+idx;
		x=x/10;
	}
	return res;
	
}

bool isPrime(int x){
	int i;
	if(x==1) {
		return false;
	}
	int flag = true;
	for(i = 2; i<x; i++){
		if(x%i == 0){
			flag = false;
			break;
		}
	}
	return flag;	
}





int main(){

	int n, ar1;
	int rev;
	
	scanf("%d", &n);
	 
	for(int i = 0; i <n; i++){
		scanf("%d", &ar1);
		rev = reverse(ar1);
		if(isPrime(rev) == true){
			printf("%d ", rev);
		}
	}
	
	return 0;
}
