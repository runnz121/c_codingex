//�ݿø� ��Ű�°� 0.5 �� ���ؼ� intȭ ��Ŵ( �Ҽ��� ����)  


#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int a[10][10];

int main() {
	freopen("input.txt", "rt", stdin);
	int i, j, sum=0, avg, min, tmp, res;
	
	
	for(i=1; i<=9; i++){
		sum=0;									//������ �������� sum�� �ʱ�ȭ  
		for(j=1; j<=9; j++){
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j]; 
		}
	
	
		avg=(sum/9.0)+0.5;						//�Ҽ����� ������ �ϱ� ���ؼ� �Ǽ��� ������� �� ����/������ �ϸ� �����ۿ� �ȳ��� �� �Ǽ��� int �� avg�� �������ν� �Ҽ��κ��� ������ ������ �ݿø� ���  
		printf("%d ",avg);
		
		min=2147000000;
		for(j=1; j<=9; j++){
			
			tmp=abs(a[i][j]-avg);				//���밪 �˰���  
			
			if(tmp<min){
				min=tmp;						//min�� tmp�� ���� (��հ��� ���̰� ���� ���� �� ) 
				res=a[i][j];					//�� ���ڰ� �ִ� ���� ���� ���̵ȴ�  
			}
			
			else if(tmp==min){					
				if(a[i][j]>res){				//���������� ū ��� ���� �ٲ� �ش�  
					res=a[i][j];
				}
			}
			
		}
		printf("%d \n", res);
	}
		
	
	
	
	
	
	
	
	return 0;
}
