#include <stdio.h>

using namespace std;

int main(){
	char s1[15];
	int age;
	
	
	scanf("%s", &s1);
	
	if(s1[7] == '1' | s1[7] == '2') {
		age = 2019-(1900+((s1[0]-48)*10)+(s1[1]-48))+1;
	} else {
		age = 2019-(2000+((s1[0]-48)*10)+(s1[1]-48))+1;
	}
	printf("%d", age);
		
	if(s1[7] == '1' | s1[7] == '3'){
		printf(" M");
	}else{
		printf(" W");
	}

	return 0;
}

