#include <stdio.h>
#include <vector>
#include <algorithm>
//#define x first
//#define y second

using namespace std;
int ch[30], n, cost=2147000000;

vector<pair<int, int> > map[30];			//페어형으로 백터 선언  

void DFS(int v, int sum){
	int i;
	if(v==n){
		if(sum<cost) cost = sum;
	}
	else {
		for(i=0; i<map[v].size(); i++) {
			if(ch[map[v][i].first]==0) {
				ch[map[v][i].first]=1;
				DFS(map[v][i].first, sum+map[v][i].second); //(노드, 가중치값) 
				ch[map[v][i].first]=0;
			}
		}
	}
}


int main() {
	freopen("input.txt", "rt", stdin);
//	
//	pair<int, int> p; 						//pair라고 선언, int 2개를 한쌍으로 선언한다 
//	p=make_pair(10,20);						//node(객체)를 생성하고 first, second에 값이 들어간다  
//	printf("%d %d\n", p.first, p.second);
	int m,i,a,b,c;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c)); //b=정점, c=가중치  
	}
	
	ch[1]=1;
	DFS(1,0);
	printf("%d\n", cost);
	
	
	
	
	return 0;
}
