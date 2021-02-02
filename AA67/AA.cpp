#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int map[30][30], ch[30], n, cost=2147000000;

void DFS(int v, int sum) {
	int i;
	if(v==n) {
		if(sum<cost) 
			cost=sum;							//종착점 도착시 최소값 교체  
		
	} else {
		for(i=1; i<=n; i++) {
			if(map[v][i]>0 && ch[i]==0) {
				ch[i]=1;
				DFS(i, sum+map[v][i]);			//가중치 값을 sum에 더하면서 node로 넘어감  
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
		map[a][b]= c;							//해당 배열로 움직일떄 가중치 값 만큼 갖는다를 표현  
	}
	
	ch[1] = 1;
	DFS(1,0);
	printf("%d\n", cost);
	
	
	return 0;
}
