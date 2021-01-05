//삽입정렬  
//for문 i는 인덱스 1번부터 돈다(0번아님)
 

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	
	int a[101], n, tmp, i, j;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=1; i<n; i++){						//n 전까지만 돌게 
	
		tmp = a[i]; 						//임시변수 tmp에 원소값을 저장하고 이것을 배열의 원소값과 비교 시킴  
	
		for(j=i-1; j>=0; j--){ 				//j는 i보다 한칸 더 앞부터 돈다 그리고 j는 감소하면서 돈다 즉 i = >>방향, j는  <<방향으로 뒤에서 앞으로 돌면서 값 비교  
			if(a[j]>tmp) {					//a[j]가 tmp보다 큰 경우  뀜 
				a[j+1]=a[j];				//a[j]의 값을 뒤로 한칸 민다  
				
			}else{
				break;
			}
		}
		a[j+1] = tmp;						//밀린기 전 공간에 tmp를 넣는다 즉
											//	7 5 6 9 8 4 에서
											//	tmp = a[i] = 5 인 상태	 
											// 	a[0] = 7 > 5인 경우 
											// 	7 7 6 9 8 4 (5는 tmp에 담겨있다) 
	}										//	5 7 6 9 8 4 (tmp의 변수값을 a[0]에 넣어준다 로 바뀜 
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	
	
	
	return 0;
}
