#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int map[51][51]; 						//2���� �迭 ����  

int main() {
	freopen("input.txt", "rt", stdin);	 
	
	int n, m, i,j,a,b,c;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++) {
		scanf("%d %d %d", &a, &b, &c);
	//	map[a][b] = 1;
	//	map[b][a] = 1;  			�������� ��� �̷��� ������ߵȴ�
	 	map[a][b] = c;
	} 
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++){
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
} 
