#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int ch[30], cnt = 0, n;
vector<int> map[30];					 //�������� ���� ����  


void DFS(int v) {
	int i;
	if(v==n){							//���� ���� ��  
		cnt++;
	}
	else{
		for(i=0; i<map[v].size(); i++){ //map[v].size()�ش� ��忡 ����Ǿ� �� �� �ִ� ����� ũ��  
			if(ch[map[v][i]]==0) {		//�̹� �湮�ߴ��� ���ߴ��� Ȯ�� (v�� ����� ����� ��ȣ)  
				ch[map[v][i]]=1;		//���ΰ�� �湮�� ���ߴٴ� ���������  
				DFS(map[v][i]);			//�̰� �Ѱܾ� �Ѵ� 
				ch[map[v][i]]=0; 		//üũ�� �ٽ� Ǯ��  
			}	
		}
	}
}






int main() {
	freopen("input.txt", "rt", stdin);
	int m, i, a, b;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++) {
		scanf("%d %d", &a, &b);
		map[a].push_back(b);			//��������Ʈ ����  
	}
	
	ch[1]=1;
	DFS(1);
	printf("%d\n", cnt);	
	return 0;
}
