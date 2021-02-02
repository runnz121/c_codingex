#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>					//큐 자료구조 사용하기 위해  

using namespace std;
int ch[30], dis[30];				//dis는 최소간선수를 넣는 배열  

int main() {
	freopen("input.txt", "rt", stdin);
	int i, n, m, a, b, x;
	vector<int> map[30];
	queue<int> Q;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++) {
		scanf("%d %d", &a, &b);
		map[a].push_back(b);		//list 만들기  
	}
	Q.push(1);						//Q에 자료 넣기
	ch[1]=1;
	while(!Q.empty()){				//Q라는 자료구조가 비어있지 않으면 참  
		x=Q.front();				//꺼낼 자료를 참조  
		Q.pop() ;					//자료를 실제로 꺼냄  
		for(i=0; i<map[x].size(); i++){
			if(ch[map[x][i]]==0) {
				ch[map[x][i]]=1;
				Q.push(map[x][i]);	//자료 넣기  
				dis[map[x][i]]=dis[x]+1;//x라는 정점을 통해서 [x][i]로 가는 것인데 그 가는 간선수에 +1를 해주는 것이다  
				
			}
		}
	} 
	
	for(i=2; i<=n; i++) {
		printf("%d : %d\n", i, dis[i]);//node번호 : 간선 최소값  
	}
	
	
	
	
	
	return 0;
}
