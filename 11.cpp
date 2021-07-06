#include <stdio.h>

int over(int x){
	int cnt1 = 0;

	if(x <= 0){
		return cnt1;
	}else{
		over(x/10);
		cnt1++;
	}
	return 0;
}

int main(){
	
	int n,i;
	int cnt = 0;
	int idx = 0;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		if(i <= 9){
			cnt++;
		}else{
			idx = over(i);
			cnt += idx;
			idx = 0;
		}
	}
	
	printf("%d", cnt);
	return 0;
}
