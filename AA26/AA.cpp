#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


int main()	{	
	freopen("input.txt", "rt",stdin);
	int i,j,n,cnt=0;					//cnt = �ڱ� ��� ���  
	
	scanf("%d",&n);
	vector<int> a(n+1);					//�ε����� 0���� n���� �����ϱ� ���� �ε��� 1������ ���  
	
	for(i=1; i<=n; i++){				//�ε��� 1������ ���  
		scanf("%d",&a[i]);
	}
	
	
	printf("1 ");						//ù��° ����� �׳� 1��  
	
	for(i=2; i<=n; i++){				//2����� ����  
		cnt=0;							//j for�� ������ �ʱ�ȭ ��Ŵ ������� ��� �ʱ�ȭ �ϱ� ����   
		for(j=i-1; j>=1; j--){			//�ڱ���� �ٷ� �պ��� ���鼭 Ȯ���ϱ� ���� i-1�� �ʱ�ȭ   
			if(a[j]>=a[i]){				//i�� ���ΰ�  
				cnt++;
			}
		}
		printf("%d ", cnt+1);
	}

	return 0;
}
