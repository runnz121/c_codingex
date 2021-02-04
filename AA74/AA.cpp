#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>	

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	int a;
	priority_queue<int> pQ;			
	while(true) {
		scanf("%d", &a);
		if(a==-1) break;
		if(a==0){
			if(pQ.empty()) printf("-1\n");
			else{
				printf("%d\n", -pQ.top());	//push값(마이너스)를 다시 원복  
				pQ.pop(); 
			}
		}
		else pQ.push(-a);					//최소힙 >>  부모노드가 가장 작음  
	} 
	
	return 0;
}
