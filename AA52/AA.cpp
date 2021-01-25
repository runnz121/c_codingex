//포인터 3개 잡아서 해결  
//2,3,5에 해당하는 포인터 2,3,5를  1로 초기화
//배열 a는 ugly number가 들어가는 배열
//각 배열에 ugly number 중 최소값을 넣고 해당 값이 들어가는 포인터는 1 씩 증가 
//1  2  3  4  5  6  7  8  9  10
//1  2  3  4  5  6  8  9 10  12
//p1		
//p2	
//p3
//해서 포인터랑 원배열 곱해서 최소값으로 uglynumber 배열에 넣고, 그 포인터로 만들어진 값이 최소값이면
//그 포인터만 1증가, 그리고 포인터로 만들어지는 값중 중복되는 최소값이 존재하는 경우 최소값 넣고 해당되는 포인터 모두 1씩증가 	
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int a[1501];

int main() {
	freopen("input.txt", "rt", stdin);
	
	int n, i, p2, p3, p5, min=2147000000;
	
	scanf("%d", &n);
	
	a[1]=1;
	p2=p3=p5=1;								//모든 포인터 1로 초기화 
	for(i=2; i<=n; i++){
		if(a[p2]*2<a[p3]*3)					//2, 3 둘 중 최소값 찾는 for문  
		{
			min=a[p2]*2;
		}
		else{
			min=a[p3]*3;
		}
		if(a[p5]*5<min){					//p5와 위에서 구한 min값이랑 비교해서 최종 최소값을 구한다  
			min=a[p5]*5;
		}
		
		if(a[p2]*2==min){					//여기서 부터 위에서 설명한 min값으로 계산된 포인터의 경우 1을 증가 시킨다  
			p2++;
		}
		if(a[p3]*3==min){
			p3++;
		}
		if(a[p5]*5==min){
			p5++;
		} 
		a[i]=min;
	}	 
	printf("%d\n", a[n]);
	return 0;
}
