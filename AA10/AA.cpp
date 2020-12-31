#include <stdio.h>

int digit_sum(int x) 			//메인 함수에서  sum=digit_sum(num) 로인해 num이 x로 넘어간다 (125라고 가정한다) 
{
	int tmp, sum1=0;
	while(x>0)						
	{							//  x		tmp(나머지)	  sum 
		tmp = x%10;				// 125	    5			5(0+5)
		sum1 += tmp;				// 12	    2			7(0+5+2)
		x=x/10;					// 1		1			8(0+5+2+1)
	}							// 0(while 문 조건에 안맞음으로 종료) 
	return sum1; 
}


using namespace std;


int main() {
	
	freopen("input.txt","rt",stdin);
	
	int n, num, i, sum, max=-2147483647, res;	//n : 숫자의 갯수, num :각각의 자연수 받음  sum : digit_sum 함수의 각자리수 합 return 위한 변수 res : 가장 큰 출력될값   
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&num);
		
		sum=digit_sum(num);						//위의 함수를 호출 this.sum = digit_sum.sum1
		
		
		
		
		if(sum>max)								//ex) 자리수 최대합이 16인 경우  
		{	
			max = sum;
			res = num;							//ex) res : 79 (자리합이 최대인 자연수), max : 16(자리합) //max = 16의 값을 갖는 79가 res가 된다  
		}
		
		
		
		else if(sum==max)						//자리값합이 16으로 같지만 더큰 자연수가 있을 경우 (ex 79, 97) 
		{
			if(num>res)							//num = 97 / res = 79
			{
				res=num;					    //자연수를 서로 교체해준다.  res = 97 / num = 79
			}
		}
		}	
		printf("%d\n", res);
	
	return 0;
}
