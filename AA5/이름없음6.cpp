//주민번호를 char 배열에 넣고 인덱스로 구분  

#include <stdio.h> //c 입출력 지원  

using namespace std;

int main() {
	
	freopen("input.txt","rt",stdin);
	char a[20]; //주민번호 담을 배열 초기화  
	int year, age;
	
	scanf("%s", &a); //string 입력 시 %s
	
	if(a[7]=='1' | a[7]=='2') //배열 7번째 인덱스가 성별, 그리고 char타입이기 때문에 ' '로 숫자 적어줌   
	 
	 {
	 	
	  year = 1900+((a[0]-48)*10+(a[1]-48)); //여기는 char배열의 숫자임으로 그냥 쓰게되면 aschii code로 인식된다 따라서 여기서 48을 뺴줘야 진짜 숫자가 입력된다   
	
	 }	else {
	 	
	 	year = 2000+((a[0]-48)*10+(a[1]-48));
	 	age = 2019-year+1;
	 }
	 printf("%d" , age);
	 
	if(a[7]=='1' | a[7]=='3') 
	{
	printf("M\n");	
	}else{
		printf("W\n");
	}
	
	
	
	return 0;
}
