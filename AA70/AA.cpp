#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>					//ť �ڷᱸ�� ����ϱ� ����  

using namespace std;
int ch[30], dis[30];				//dis�� �ּҰ������� �ִ� �迭  

int main() {
	freopen("input.txt", "rt", stdin);
	int i, n, m, a, b, x;
	vector<int> map[30];
	queue<int> Q;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++) {
		scanf("%d %d", &a, &b);
		map[a].push_back(b);		//list �����  
	}
	Q.push(1);						//Q�� �ڷ� �ֱ�
	ch[1]=1;
	while(!Q.empty()){				//Q��� �ڷᱸ���� ������� ������ ��  
		x=Q.front();				//���� �ڷḦ ����  
		Q.pop() ;					//�ڷḦ ������ ����  
		for(i=0; i<map[x].size(); i++){
			if(ch[map[x][i]]==0) {
				ch[map[x][i]]=1;
				Q.push(map[x][i]);	//�ڷ� �ֱ�  
				dis[map[x][i]]=dis[x]+1;//x��� ������ ���ؼ� [x][i]�� ���� ���ε� �� ���� �������� +1�� ���ִ� ���̴�  
				
			}
		}
	} 
	
	for(i=2; i<=n; i++) {
		printf("%d : %d\n", i, dis[i]);//node��ȣ : ���� �ּҰ�  
	}
	
	
	
	
	
	return 0;
}
