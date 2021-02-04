#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>	

using namespace std;
int DFS(int n, int r) {
	if(n==r || r==0) return 1;
	else return DFS(n-1, r-1)+DFS(n-1, r);		//n-1 C r + n-1 C r-1의 경우를 적은 것  
}

int main() {
	freopen("input.txt", "rt", stdin);
	
	int n,r;
	
	scanf("%d %d" ,&n, &r);
	
	printf("%d\n",DFS(n,r));
	
	
	
	return 0;
}

