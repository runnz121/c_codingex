#include <iostream>



using namespace std;

int main() 


{
	int n, m, i, sum=0;
	
	cin >>n>>m; 				//숫자 2개 받기
	
	for(i = 1; i<=n; i++ ){		//입력받은 수 까지  
		if(i%m==0){				//나머지가 0 인 경우  = 즉 배수  
			sum = sum+i;			
		}	
	}
	cout <<sum<< endl;
	 
	return 0;
}
