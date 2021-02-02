#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>	

using namespace std;
int ch[10001], d[3]={1, -1, 5};

int main() {
	freopen("input.txt", "rt", stdin);
	int s, e, x, pos,i;					//pos �̵��� �� �ִ� ����
	queue<int> Q;
	
	scanf("%d %d", &s, &e);
	
	ch[s] = 1;
	Q.push(s);							//������� �ֱ� 
	while(!Q.empty()) {
		x=Q.front();
		Q.pop();
		for(i=0; i<3; i++) {
			pos=x+d[i];					//x�� �������  
			if(pos<=0||pos>10000) continue;	//pos�� �ش� ���� �������� ����  
			if(pos==e){
				printf("%d\n" , ch[x]); //ch[x] �� ����Ʈ �ϴ� ���� : ��������� 1�̱� ������ �ٷ� ���� ����(pos)���� �� ���� ����  
				exit(0);				//���α׷� ����  
			}
			if(ch[pos]==0){
				ch[pos]=ch[x]+1;
				Q.push(pos);
			}
		}
	} 
	
	
	
	return 0;
}
