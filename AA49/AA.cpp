//�������� �������� ���Ұ����� 2���� �迭 ä����
//�����ʿ��� �������� ���Ұ��� �������� �� ���Ұ����� ū���� 2���� �迭�� ���� ���
//�� ���� ������ ���Ұ����� �ٲ۴�

#include <stdio.h>
#include <vector>
#include <algorithm>

int a[11][11], b[11];
using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	int n, i, j, sum=0;
	
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &b[i]);	
		}										//b�迭�� ���������� ����  
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			a[j][i]=b[i];						//i���� ������ ���¿��� j���� ���� �ڵ�  
			}
		}
	
	for(i=n; i>=1; i--){						//���鰪�� �޴µ� n���� �޴´�(�Ųٷ� �޴´�)  ���⼭�� 3 2 1 1 >> ������� 
		scanf("%d", &b[i]);		
	}
	for(i=1; i<=n; i++){						//b���� ū ���� ���Ҹ� ��´�  
		for(j=1; j<=n; j++){
			if(a[i][j]>b[i]){
				a[i][j]=b[i];					//�� ���ǿ��� b[i]���� ū���� ������ b[i]�� �� �ش� ������ 2���� �迭 ���� ��ġ�� �־��ش�  
			}
		}
	}	
	
	for(i=1; i<=n; i++){						
		for(j=1; j<=n; j++){
			sum+=a[i][j];
			}
		}
	
	printf("%d\n",sum);	
	return 0;
}
