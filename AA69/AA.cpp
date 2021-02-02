#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int Q[100], front=-1, back=-1, ch[10];		//front : que에서 자료 나오는변수, back : 자료 넣는 변수, ch : 체크 배열 (무방향일 경우)  
vector<int> map[10];

int main() {
	freopen("input.txt", "rt", stdin);
	int i, a, b, x;
	
	for(i=1; i<=6; i++) {
		scanf("%d %d", &a, &b);
		map[a].push_back(b);				//a에서 b로 간다  
		map[b].push_back(a);				//b에서 a로 간다(무방향이라 양방향 설정 해줌)  
	}
	Q[++back]=1;							//Q에 자료 넣는다 (1번 루트 노드를 넣는다)  
	ch[1]=1;								//들어갔으니 체크 걸어줌
	while(front<back){						//front가 back보다 작은 경우 자료가 아직 남아있는 것, 같으면 그제서야 자료구조가 빈것 
		x=Q[++front];
		printf("%d ", x);
		for(i=0; i<map[x].size(); i++) {	//map[x].size() :연결된 노드가총 몇게인지  
			if(ch[map[x][i]]==0) {
				ch[map[x][i]]=1;
				Q[++back]=map[x][i];		//Q에 자료 넣기  
			}
		}
	}
	
	
	
	return 0;
}
