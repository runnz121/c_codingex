#include <stdio.h>

int digit_sum(int x) 			//���� �Լ�����  sum=digit_sum(num) ������ num�� x�� �Ѿ�� (125��� �����Ѵ�) 
{
	int tmp, sum1=0;
	while(x>0)						
	{							//  x		tmp(������)	  sum 
		tmp = x%10;				// 125	    5			5(0+5)
		sum1 += tmp;				// 12	    2			7(0+5+2)
		x=x/10;					// 1		1			8(0+5+2+1)
	}							// 0(while �� ���ǿ� �ȸ������� ����) 
	return sum1; 
}


using namespace std;


int main() {
	
	freopen("input.txt","rt",stdin);
	
	int n, num, i, sum, max=-2147483647, res;	//n : ������ ����, num :������ �ڿ��� ����  sum : digit_sum �Լ��� ���ڸ��� �� return ���� ���� res : ���� ū ��µɰ�   
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&num);
		
		sum=digit_sum(num);						//���� �Լ��� ȣ�� this.sum = digit_sum.sum1
		
		
		
		
		if(sum>max)								//ex) �ڸ��� �ִ����� 16�� ���  
		{	
			max = sum;
			res = num;							//ex) res : 79 (�ڸ����� �ִ��� �ڿ���), max : 16(�ڸ���) //max = 16�� ���� ���� 79�� res�� �ȴ�  
		}
		
		
		
		else if(sum==max)						//�ڸ������� 16���� ������ ��ū �ڿ����� ���� ��� (ex 79, 97) 
		{
			if(num>res)							//num = 97 / res = 79
			{
				res=num;					    //�ڿ����� ���� ��ü���ش�.  res = 97 / num = 79
			}
		}
		}	
		printf("%d\n", res);
	
	return 0;
}
