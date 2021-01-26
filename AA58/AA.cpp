#include <stdio.h>
#include <vector>
#include <algorithm>  
#include <stack>

using namespace std;

	
void recur(int v){						//node를 받는다
	if(v>7){
		return;							//node max 는 7임으로 
	}
	else{
		//printf("%d", v);				//전위순회 위치 
		recur(v*2);						//왼쪽 자식 호출 
		//printf("%d", v);				//중위순회 위치  
		recur(v*2+1);					//오른쪽 자식 호출 
		printf("%d ", v);				//후위순회 위치  
	} 
	
}
	

int main() {
	freopen("input.txt", "rt", stdin);	 

	recur(1);
	 
	return 0;
} 

//부모 - 왼쪽 - 오른쪽 : 전위순회
//왼쪽 - 부모 - 오른쪽 : 중위순회
//왼쪽 - 오른쪽 - 부모 : 후위순회  
