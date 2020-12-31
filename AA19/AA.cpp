// 1.배열에 먼저 저장한다
// 2.max를(배열의 맨 뒤의 값)을 잡고 for문이 감소하게하여
// 3.max의 값을 바꿔줌
// 4.이제 바뀐 max값으로 for문 돌림  


#include <stdio.h>

int main() {
	
	freopen("input.txt","rt",stdin);
	
	int n, i, cnt=0, h[101], max;


	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d", &h[i]); 					//배열원소로  받을 때 이렇게 써야한다 
	}
	max=h[n];									//배열의 맨 뒤의 원소값으로 max를 초기화 뒤에서 부터 앞으로 오는 것이라서  
	for(i=n; i>=1; i--){
		if(h[i]>max){							//기존의 max값보다 큰 원소를 만났을 경우  
			max=h[i];							//max값을 교체해준다 
			cnt++;								//교체 횟수 
			
		}
	}	
	
	printf("%d\n", cnt);	
	
	
	return 0;
}
