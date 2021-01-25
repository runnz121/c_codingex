#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

void recur(int x){						//재귀함수(자기가 자기를 호출)  
	if(x==0) return;					//무한루프 방지를 위한 조건 (return으로 함수 종료)  
	else{		
		//printf("%d ", x);				//출력시 3, 2, 1,		
		recur(x-1);
		printf("%d ", x);				//여기서 출력시 1,2,3 
	}
}

int main() {
	freopen("input.txt", "rt", stdin);	 
	int n;
	scanf("%d", &n);
	recur(n);
	
	
	
	return 0;
} 
