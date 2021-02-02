#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int Q[100], front=-1, back=-1, ch[10];		//front : que���� �ڷ� �����º���, back : �ڷ� �ִ� ����, ch : üũ �迭 (�������� ���)  
vector<int> map[10];

int main() {
	freopen("input.txt", "rt", stdin);
	int i, a, b, x;
	
	for(i=1; i<=6; i++) {
		scanf("%d %d", &a, &b);
		map[a].push_back(b);				//a���� b�� ����  
		map[b].push_back(a);				//b���� a�� ����(�������̶� ����� ���� ����)  
	}
	Q[++back]=1;							//Q�� �ڷ� �ִ´� (1�� ��Ʈ ��带 �ִ´�)  
	ch[1]=1;								//������ üũ �ɾ���
	while(front<back){						//front�� back���� ���� ��� �ڷᰡ ���� �����ִ� ��, ������ �������� �ڷᱸ���� ��� 
		x=Q[++front];
		printf("%d ", x);
		for(i=0; i<map[x].size(); i++) {	//map[x].size() :����� ��尡�� �������  
			if(ch[map[x][i]]==0) {
				ch[map[x][i]]=1;
				Q[++back]=map[x][i];		//Q�� �ڷ� �ֱ�  
			}
		}
	}
	
	
	
	return 0;
}
