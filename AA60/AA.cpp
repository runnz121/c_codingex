//total : 전체원소의 합
//sum : 새로 만든 부분집합의 합
//totla -sum : 나머지 부분집합의 합
//sum = total-sum이 되도록 코드 생성 


#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

int n, a[11], total=0;
bool flag = false;							//flag 변수 선언  

using namespace std;

void DFS(int L, int sum){					//누적된 sum값이 일로 다시 넘어온다  
	if(sum>(totla/2)) return;				//원소의 전체합의 반보다 커지면 그 이하 노드는 볼 필요 없다  
	if(flag==true) return;					//이 조건을 줌으로써 만족하는 조건이 있을 경우 넘어오는 호출을 모두 종료시킨다  
	if(L==n+1){
		if(sum==(total-sum)){				//부분집합의 값이서로 같은 경우  
			flag =true;	
		}									//위의 조건이 참인경우 flag 변수로 바꿈  
	} else {
		DFS(L+1, sum+a[L]);					//원소 누적(왼쪽 자식 )  
		DFS(L+1, sum);						//오른쪽 자식  
	}
}

int main() {
	freopen("input.txt", "rt", stdin);	 
	int i;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		total += a[i];
	}
	DFS(1, 0);								//level과 원소의 합을 넘긴다  
	if(flag) printf("YES\n");
	else printf("NO\n");					//만족하는 조건이 없어 재귀구문만 돌고 flag = false상태로 종료되는 경우  
	
	
	return 0;
} 
