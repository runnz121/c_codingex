#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>	

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	int a;
	priority_queue<int> pQ;				//우선순위 큐 선언
	while(true) {
		scanf("%d", &a);
		if(a==-1) break;
		if(a==0){
			if(pQ.empty()) printf("-1\n");
			else{
				printf("%d\n", pQ.top());//pQ.top() >> 최대값(루트값) 
				pQ.pop(); 
			}
		}
		else pQ.push(a);
	} 
	
	return 0;
}
