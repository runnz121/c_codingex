#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>	


//���丮���� ����Լ��� ����  
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

