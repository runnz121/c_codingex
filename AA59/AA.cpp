#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int n, ch[11];

void DFS(int L) {
	int i;
	if(L==n+1){							//종료지점  
		for(i=1; i<=n; i++){
			if(ch[i]==1) printf("%d", i);
		}
		puts("");
		
	} else {
		ch[L]=1;						//참여한다(왼쪽 자식으로 이동)  
		DFS(L+1);
		ch[L]=0;
		DFS(L+1);
	}	
}



int main() {
	freopen("input.txt", "rt", stdin);	 
	scanf("%d" ,&n);
	DFS(1);								//이게 L(level) 
	
	
	return 0;
} 
