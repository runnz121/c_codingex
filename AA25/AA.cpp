//�迭 a, b�ΰ��� ���� a�� ���� ���� �迭, b�� ��� ���� �迭 �̶� b�� ��� 1�� �ʱ�ȭ
//���� for���� ���� a[i]> a[j] �� ��츦 ã�� ũ�ٸ� b�迭�� ���� 1�� ���� ��Ŵ
//�迭 b�� ���� ����ϸ� ��  

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int main()	{	
	freopen("input.txt", "rt",stdin);	
	int i, j, a[200], b[200], n;	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		b[i]=1;							//��� �迭 ��� 1���̶�� �ʱ�ȭ  
	}
	
	for(i=1; i<=n; i++) {				//a[i]�� ���ΰ�  
		for(j=1; j<=n; j++){
			if(a[j]>a[i]){				//a[j]�� ������δ� �� ������ ū ���  
				b[i]++;					//������� ��������(1�� -> 2��) 
		}
		}
	}
	
	for(i=1; i<=n; i++){
		printf("%d", b[i]);
	}
	

	return 0;
}
