#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

void recur(int x) {
	if(x==0){							//x(��)�� 0�̵Ǹ� ����  
		return;
	} else {
		//printf("%d", x%2);			//���⿡ ������ 1101 
		recur(x/2);
		printf("%d", x%2);				//���⿡ ������ 1011 
	}
}

int main() {
	freopen("input.txt", "rt", stdin);	 
	
	int n;
	
	scanf("%d", &n);
	recur(n);
	
	
	
	
	
	return 0;
} 
