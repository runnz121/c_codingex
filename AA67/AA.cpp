#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int map[30][30], ch[30], n, cost=2147000000;

void DFS(int v, int sum) {
	int i;
	if(v==n) {
		if(sum<cost) 
			cost=sum;							//������ ������ �ּҰ� ��ü  
		
	} else {
		for(i=1; i<=n; i++) {
			if(map[v][i]>0 && ch[i]==0) {
				ch[i]=1;
				DFS(i, sum+map[v][i]);			//����ġ ���� sum�� ���ϸ鼭 node�� �Ѿ  
				ch[i]=0;
			}
		}
	}
}



int main() {
	freopen("input.txt", "rt", stdin);
	
	int m, i, a, b, c;
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a][b]= c;							//�ش� �迭�� �����ϋ� ����ġ �� ��ŭ ���´ٸ� ǥ��  
	}
	
	ch[1] = 1;
	DFS(1,0);
	printf("%d\n", cost);
	
	
	return 0;
}
