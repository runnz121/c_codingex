#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;
int map[10][10], ch[10][10];				//7*7��� ����, 2���� üũ�迭  
int dx[4]={-1, 0, 1, 0};					//�����¿� ���� ���� ��  
int dy[4]={0, 1, 0, -1};
int cnt = 0;

void DFS(int x, int y) {
	int i, xx, yy;							//�̵��� ���� ��ǥ ���� ����  
	
	if(x==7 && y==7){						//7*7�迭������ �������� �̹� ����������  
		cnt++;
	}
	else{
		for(i=0; i<4; i++) {
			xx=x+dx[i];						//�̵��� x��ǥ ���� 
			yy=y+dy[i]; 					//�̵��� y��ǥ ���� 
			if(xx<1 || xx>7 || yy<1 || yy>7){//���ڰ� ����� ���  
				continue;	
				}				//���� ������ �׳� ������  
			if(map[xx][yy]==0 && ch[xx][yy]==0){
				ch[xx][yy]=1;				//�ش� ���� �Ѿ�� check �ɱ�  
				DFS(xx, yy);				//�Ѿ ��ǥ  
				ch[xx][yy]=0;				//check �迭 Ǯ��  
			}
		}
	}
}




int main() {
	freopen("input.txt", "rt", stdin);
	int i, j;
	
	//2���� �迭 �ޱ�  
	for(i=1; i<=7; i++) {
		for(j=1; j<=7; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	ch[1][1]=1;	 							//1,1 ���� ������������ ���� üũ �迭   
	DFS(1,1);								//��������  
	printf("%d\n", cnt);
	return 0;
} 
