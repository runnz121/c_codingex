//이웃 두수를 비교하는 버블정렬 이용  
//양수끼리는 바꾸지말고, 양수와 음수를 비교했을시 앞이 양수이면 두수를 바꾼다 
 
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	
	int a[101], n,i,j,tmp;
	
	scanf("%d" , &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	} 
	
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1; j++){
			if(a[j]>0 && a[j+1]<0){				//앞이 양수이고, 뒤 수가 음소인 경우에  
				tmp = a[j];						//임시변수에 앞의 양수값 넣고 
				a[j] = a[j+1];					//앞의 양수값에 뒤에 음수값을 넣고(인덱스 기준) 
				a[j+1] = tmp;					//뒤의 인덱스 값에 앞의 음수값 넣어준다  
			}
		}
	}
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	
	
	return 0;
}
