#include <stdio.h>
#include <vector>
#include <algorithm>  
#include <stack>

using namespace std;

	
void recur(int v){						//node�� �޴´�
	if(v>7){
		return;							//node max �� 7������ 
	}
	else{
		//printf("%d", v);				//������ȸ ��ġ 
		recur(v*2);						//���� �ڽ� ȣ�� 
		//printf("%d", v);				//������ȸ ��ġ  
		recur(v*2+1);					//������ �ڽ� ȣ�� 
		printf("%d ", v);				//������ȸ ��ġ  
	} 
	
}
	

int main() {
	freopen("input.txt", "rt", stdin);	 

	recur(1);
	 
	return 0;
} 

//�θ� - ���� - ������ : ������ȸ
//���� - �θ� - ������ : ������ȸ
//���� - ������ - �θ� : ������ȸ  
