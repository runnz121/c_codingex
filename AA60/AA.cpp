//total : ��ü������ ��
//sum : ���� ���� �κ������� ��
//totla -sum : ������ �κ������� ��
//sum = total-sum�� �ǵ��� �ڵ� ���� 


#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

int n, a[11], total=0;
bool flag = false;							//flag ���� ����  

using namespace std;

void DFS(int L, int sum){					//������ sum���� �Ϸ� �ٽ� �Ѿ�´�  
	if(sum>(totla/2)) return;				//������ ��ü���� �ݺ��� Ŀ���� �� ���� ���� �� �ʿ� ����  
	if(flag==true) return;					//�� ������ �����ν� �����ϴ� ������ ���� ��� �Ѿ���� ȣ���� ��� �����Ų��  
	if(L==n+1){
		if(sum==(total-sum)){				//�κ������� ���̼��� ���� ���  
			flag =true;	
		}									//���� ������ ���ΰ�� flag ������ �ٲ�  
	} else {
		DFS(L+1, sum+a[L]);					//���� ����(���� �ڽ� )  
		DFS(L+1, sum);						//������ �ڽ�  
	}
}

int main() {
	freopen("input.txt", "rt", stdin);	 
	int i;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		total += a[i];
	}
	DFS(1, 0);								//level�� ������ ���� �ѱ��  
	if(flag) printf("YES\n");
	else printf("NO\n");					//�����ϴ� ������ ���� ��ͱ����� ���� flag = false���·� ����Ǵ� ���  
	
	
	return 0;
} 
