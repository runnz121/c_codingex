//3���� ��찡 �ִ�. +, -, ���� x 


#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int a[11], n, m, cnt = 0, path[11];

void DFS(int L, int val) {
	if(L==n+1) {
		if(val==m) {
			cnt++;		//���� ����� 
			for(int i=1; i<L; i++){
				printf("%d " , path[i]);
			}
			puts("");
		}
	}
	else {
		path[L]=a[L];
		DFS(L+1, val+a[L]);		//���� 
		path[L]=-a[L];
		DFS(L+1, val-a[L]);		//����  
		path[L]=0;
		DFS(L+1, val);			//���� x 
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
	if(cnt==0) printf("-1\n");			//cnt ==0 �� �Ǵ� ���� �ش������� �����ϴ� ��찡 ���� ��   
	else{
		printf("%d\n", cnt); 
	}

	
	return 0;
} 
