#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int map[30][30], ch[30], cnt=0;			//ch�迭�� �ѹ� �湮�Ѱ��� �ٽ� �湮���� �ʵ���(���ѷ���) ��������  
int n;
void DFS(int v){
	int i; 
	if(v==n){							//������ ������ ���� ���  
		cnt ++;
	}else {
		 for(i=1; i<=n; i++){
		 	if(map[v][i]==1 && ch[i]==0){//v�� ���� ���� �ִ� �������� i�������� �� �� ������ 1�� üũ �׸��� ������ �ϴ� ���� i�� ���� �湮 ���ߴٸ�  
		 		ch[i]=1;				//v���� i�� �Ѿ� ���������� 1�� üũ  
		 		DFS(i);					//i��� �������� �Ѿ���Ѵ�  
			 	ch[i]=0;				//check �迭�� �ٽ� 0���� �ʱ�ȭ   
			 }
		 }
	}
}


int main() {
	freopen("input.txt", "rt", stdin);
	int  m, i, a, b;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++) {
		scanf("%d %d", &a, &b);
		map[a][b]=1;
	}
	
	ch[1]=1;							//1�������� �湮�ߴ��� üũ 
	DFS(1);								//1���������� ��� 
	printf("%d\n", cnt);
	
	
	
	
	
	
	
	return 0;
}
