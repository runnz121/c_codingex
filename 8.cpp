#include <stdio.h>

int main(){
	char s[50];
	int i, cnt = 0, flag= 1;
	
	scanf("%s", &s);
	
	for(i = 0; s[i] != '\0';  i++){
		if(s[0] == '('){
			if(s[i] == ')'){
				cnt--;
			}else{
				cnt++;
			}
		}
	}
	
	if(cnt == 0 && s[0] == '('){
		printf("YES");
	}else{
		printf("NO");
	}
		
	return 0;
}
