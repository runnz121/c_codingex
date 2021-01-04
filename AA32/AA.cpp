//이중 for문 돌아야한다
// 

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	
	int n,i, a[101],tmp,idx, j;
	
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		
	}
	
	for(i=0; i<n-1; i++){
		idx=i;								// idx 값을 i로 초기화  
		for(j=i+1; j<n; j++){				// i다음 원소부터, 0부터 시작했기 때문에 j<n 이다.  
			if(a[j]<a[idx]){
			idx = j;						// idx는 현재까지의 가장 작은 값이다. 
			 
		}									// j for문이 끝난후 스왑  
		tmp = a[i];							// tmp에 a[i]값을 저장  
		a[i] = a[idx];						// a[i] 에 a[idx] 값을 저장  
		a[idx] = tmp;						// a[idx]에 tmp에 저장했던 값을 저장  
	}
}
	
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	

	
	
	return 0;
}
