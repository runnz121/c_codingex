#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int map[30][30], ch[30], cnt=0;			//ch배열은 한번 방문한곳은 다시 방문하지 않도록(무한루프) 제지역할  
int n;
void DFS(int v){
	int i; 
	if(v==n){							//도착지 정점에 왔을 경우  
		cnt ++;
	}else {
		 for(i=1; i<=n; i++){
		 	if(map[v][i]==1 && ch[i]==0){//v는 현재 내가 있는 정점에서 i정점으로 갈 수 있으면 1로 체크 그리고 갈려고 하는 정점 i를 아직 방문 안했다면  
		 		ch[i]=1;				//v에서 i로 넘어 갈것임으로 1로 체크  
		 		DFS(i);					//i라는 정점으로 넘어가야한다  
			 	ch[i]=0;				//check 배열을 다시 0으로 초기화   
			 }
		 }
	}
}


int main() {
	freopen("input.txt", "rt", stdin);
	int  m, i, a, b;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++) {
		scanf("%d %d", &a, &b);
		map[a][b]=1;
	}
	
	ch[1]=1;							//1번정점은 방문했던곳 체크 
	DFS(1);								//1번정점으로 출발 
	printf("%d\n", cnt);
	
	
	
	
	
	
	
	return 0;
}
