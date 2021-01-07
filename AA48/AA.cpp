//반올림 시키는것 0.5 를 더해서 int화 시킴( 소수점 버림)  


#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int a[10][10];

int main() {
	freopen("input.txt", "rt", stdin);
	int i, j, sum=0, avg, min, tmp, res;
	
	
	for(i=1; i<=9; i++){
		sum=0;									//매행을 돌때마다 sum을 초기화  
		for(j=1; j<=9; j++){
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j]; 
		}
	
	
		avg=(sum/9.0)+0.5;						//소수점이 나오게 하기 위해선 실수로 적어줘야 함 정수/정수로 하면 정수밖에 안나옴 이 실수를 int 형 avg에 넣음으로써 소수부분을 날리는 식으로 반올림 계산  
		printf("%d ",avg);
		
		min=2147000000;
		for(j=1; j<=9; j++){
			
			tmp=abs(a[i][j]-avg);				//절대값 알고리즘  
			
			if(tmp<min){
				min=tmp;						//min을 tmp로 변경 (평균과의 차이가 가장 적은 값 ) 
				res=a[i][j];					//그 숫자가 있는 행의 값이 답이된다  
			}
			
			else if(tmp==min){					
				if(a[i][j]>res){				//기존값보다 큰 경우 값을 바꿔 준다  
					res=a[i][j];
				}
			}
			
		}
		printf("%d \n", res);
	}
		
	
	
	
	
	
	
	
	return 0;
}
