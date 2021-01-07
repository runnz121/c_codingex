//정면으로 봤을때의 원소값으로 2차원 배열 채운후
//오른쪽에서 봤을때의 원소값을 기준으로 이 원소값보다 큰것이 2차원 배열에 있을 경우
//그 값을 측면의 원소값으로 바꾼다

#include <stdio.h>
#include <vector>
#include <algorithm>

int a[11][11], b[11];
using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	int n, i, j, sum=0;
	
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &b[i]);	
		}										//b배열에 정면정보를 저장  
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			a[j][i]=b[i];						//i값이 고정된 상태에서 j값만 들어가는 코드  
			}
		}
	
	for(i=n; i>=1; i--){						//측면값을 받는데 n부터 받는다(거꾸로 받는다)  여기서는 3 2 1 1 >> 순서대로 
		scanf("%d", &b[i]);		
	}
	for(i=1; i<=n; i++){						//b보다 큰 값의 원소를 깎는다  
		for(j=1; j<=n; j++){
			if(a[i][j]>b[i]){
				a[i][j]=b[i];					//위 조건에서 b[i]보다 큰것이 있으면 b[i]값 을 해당 조건의 2차원 배열 원소 위치에 넣어준다  
			}
		}
	}	
	
	for(i=1; i<=n; i++){						
		for(j=1; j<=n; j++){
			sum+=a[i][j];
			}
		}
	
	printf("%d\n",sum);	
	return 0;
}
