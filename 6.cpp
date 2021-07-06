#include <stdio.h>

int main(){
	int i, j, n, m, sum=0, res=0, cnt = 0;
	char s[51];
	
	scanf("%s", &s);
	
	for(i = 0; s[i]!='\0'; i++)
	{
		if(s[i] > 48 && s[i] <= 57){
			res = res*10+(s[i]-48);
		}
	}
	printf("%d\n",res);
	
	for(j = 1; j <= res; j++){
		if(res%j == 0){
			cnt++;
		}
	}
	
	printf("%d\n",cnt);	
	
	
	return 0;
}
