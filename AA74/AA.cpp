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
				printf("%d\n", -pQ.top());	//push��(���̳ʽ�)�� �ٽ� ����  
				pQ.pop(); 
			}
		}
		else pQ.push(-a);					//�ּ��� >>  �θ��尡 ���� ����  
	} 
	
	return 0;
}
