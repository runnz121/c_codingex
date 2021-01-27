#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;
int data[10], tmp[10];

void divide(int lt, int rt) {
	int mid;
	int p1, p2, p3; 
	if(lt<rt){
		mid = (lt + rt)/2;
		divide(lt, mid);
		divide(mid+1,rt); 
		//이 아래에 함수를 적게되면 후위순회를 하게된다 
		//왼쪽 자식과 오른쪽 자식의 일이 끝난다음 부모노드가 하게될일  
		p1=lt;
		p2=mid+1;
		p3=lt;
		while(p1<=mid && p2<=rt) {
			if(data[p1]<data[p2]) tmp[p3++] = data[p1++];
			else tmp[p3++] = data[p2++];
		}	
		while(p1<=mid) tmp[p3++] = data[p1++];
		while(p2<=rt) tmp[p3++] = data[p2++];
		for(int i=lt; i<=rt; i++) {
			data[i] = tmp[i];					//tmp배열 값을 data배열로 복사  
		}
	}
}




int main() {
	freopen("input.txt", "rt", stdin);	 
	int n, i;
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		scanf("%d", &data[i]);
	}
	
	divide(1,n);
	for(i=1; i<=n; i++) {
		printf("%d ", data[i]);
	}
	
	
	
	return 0;
} 
