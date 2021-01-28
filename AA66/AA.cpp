#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int ch[30], cnt = 0, n;
vector<int> map[30];					 //정점담을 백터 생성  


void DFS(int v) {
	int i;
	if(v==n){							//종점 도달 시  
		cnt++;
	}
	else{
		for(i=0; i<map[v].size(); i++){ //map[v].size()해당 노드에 연결되어 갈 수 있는 노드의 크기  
			if(ch[map[v][i]]==0) {		//이미 방문했는지 안했는지 확인 (v와 연결된 노드의 번호)  
				ch[map[v][i]]=1;		//참인경우 방문을 안했다는 얘기임으로  
				DFS(map[v][i]);			//이걸 넘겨야 한다 
				ch[map[v][i]]=0; 		//체크를 다시 풀기  
			}	
		}
	}
}






int main() {
	freopen("input.txt", "rt", stdin);
	int m, i, a, b;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++) {
		scanf("%d %d", &a, &b);
		map[a].push_back(b);			//인접리스트 만듬  
	}
	
	ch[1]=1;
	DFS(1);
	printf("%d\n", cnt);	
	return 0;
}
