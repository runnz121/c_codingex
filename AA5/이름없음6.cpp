//�ֹι�ȣ�� char �迭�� �ְ� �ε����� ����  

#include <stdio.h> //c ����� ����  

using namespace std;

int main() {
	
	freopen("input.txt","rt",stdin);
	char a[20]; //�ֹι�ȣ ���� �迭 �ʱ�ȭ  
	int year, age;
	
	scanf("%s", &a); //string �Է� �� %s
	
	if(a[7]=='1' | a[7]=='2') //�迭 7��° �ε����� ����, �׸��� charŸ���̱� ������ ' '�� ���� ������   
	 
	 {
	 	
	  year = 1900+((a[0]-48)*10+(a[1]-48)); //����� char�迭�� ���������� �׳� ���ԵǸ� aschii code�� �νĵȴ� ���� ���⼭ 48�� ����� ��¥ ���ڰ� �Էµȴ�   
	
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
