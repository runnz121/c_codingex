#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

void recur(int x){						//����Լ�(�ڱⰡ �ڱ⸦ ȣ��)  
	if(x==0) return;					//���ѷ��� ������ ���� ���� (return���� �Լ� ����)  
	else{		
		//printf("%d ", x);				//��½� 3, 2, 1,		
		recur(x-1);
		printf("%d ", x);				//���⼭ ��½� 1,2,3 
	}
}

int main() {
	freopen("input.txt", "rt", stdin);	 
	int n;
	scanf("%d", &n);
	recur(n);
	
	
	
	return 0;
} 
