#include <stdio.h>

int main(){
	char s[101];
	char res[101];
	char idx;
	int i,j = 0;
	
	gets(s);
		
	for(i= 0; s[i] != '\0'; i++){
		if(s[i] != ' '){
			if(s[i] >= 65 && s[i] <= 90){
				res[j++] = s[i] + 32;
			}else{
				res[j++] = s[i];
			}
		}	
	}
	res[i] != '\0';
	printf("%s\n", res);	

return 0;	
}
