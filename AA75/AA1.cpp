#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>	


//팩토리얼을 재귀함수로 구현  
using namespace std;
int DFS(int n) {
	if(n==1) return 1;
	else return n*DFS(n-1);
}

int main() {
	freopen("input.txt", "rt", stdin);
	
	int n;
	
	scanf("%d" ,&n);
	
	printf("%d\n",DFS(n));
	
	
	
	return 0;
}

