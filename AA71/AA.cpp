#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>	

using namespace std;
int ch[10001], d[3]={1, -1, 5};

int main() {
	freopen("input.txt", "rt", stdin);
	int s, e, x, pos,i;					//pos 이동할 수 있는 지점
	queue<int> Q;
	
	scanf("%d %d", &s, &e);
	
	ch[s] = 1;
	Q.push(s);							//출발지점 넣기 
	while(!Q.empty()) {
		x=Q.front();
		Q.pop();
		for(i=0; i<3; i++) {
			pos=x+d[i];					//x는 출발정점  
			if(pos<=0||pos>10000) continue;	//pos는 해당 범위 내에서만 계산됨  
			if(pos==e){
				printf("%d\n" , ch[x]); //ch[x] 을 프린트 하는 이유 : 출발지점이 1이기 때문에 바로 도착 지점(pos)보다 전 값을 지정  
				exit(0);				//프로그램 종료  
			}
			if(ch[pos]==0){
				ch[pos]=ch[x]+1;
				Q.push(pos);
			}
		}
	} 
	
	
	
	return 0;
}
