#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>	

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	int n, k, i;
	
	queue<int> Q;
	scanf("%d %d" , &n ,&k);
	for(i=1; i<=n; i++) {
		Q.push(i);
	}
	while(!Q.empty()) {
		for(i=1; i<k;i++){
			Q.push(Q.front());				//맨 앞에있는 값을 뒤로 넣는다  
			Q.pop();						//그리고 pop시킨다 
		}
		Q.pop();
		if(Q.size()==1){
			printf("%d\n", Q.front());
			Q.pop();
		}
	}
	
	return 0;
}
