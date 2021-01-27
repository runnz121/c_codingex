//3가지 경우가 있다. +, -, 참여 x 


#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int a[11], n, m, cnt = 0, path[11];

void DFS(int L, int val) {
	if(L==n+1) {
		if(val==m) {
			cnt++;		//갯수 세면됨 
			for(int i=1; i<L; i++){
				printf("%d " , path[i]);
			}
			puts("");
		}
	}
	else {
		path[L]=a[L];
		DFS(L+1, val+a[L]);		//증가 
		path[L]=-a[L];
		DFS(L+1, val-a[L]);		//감소  
		path[L]=0;
		DFS(L+1, val);			//참여 x 
	}
}

int main() {
	freopen("input.txt", "rt", stdin);	 
	int i;
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		
	}
	
	DFS(1,0);
	if(cnt==0) printf("-1\n");			//cnt ==0 은 되는 경우는 해당조건이 만족하는 경우가 없을 때   
	else{
		printf("%d\n", cnt); 
	}

	
	return 0;
} 
