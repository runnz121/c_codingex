#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	
	int n, i, j, tmp, a[101], idx, cnt=0; 		//cnt = ��� ã�� ���� �ʱⰪ  
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n-1; i++){
		idx=i;
		for(j=i+1; j<n; j++){
			if(a[j]>a[idx]){
				idx=j;
			}
		}
		tmp = a[i];
		a[i]=a[idx];
		a[idx]=tmp;
	}											//������� ��������  
	
	
	for(i=1; i<n; i++){							//��� ã��  
		if(a[i-1]!=a[i])						
		{
			cnt++;
		}
		if(cnt==2){								//cnt�� 2�̸� 3���� �����̴�  
			printf("%d\n", a[i]);
			break;
		}
	}
	return 0;
}
