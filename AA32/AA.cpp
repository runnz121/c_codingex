//���� for�� ���ƾ��Ѵ�
// 

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	
	int n,i, a[101],tmp,idx, j;
	
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		
	}
	
	for(i=0; i<n-1; i++){
		idx=i;								// idx ���� i�� �ʱ�ȭ  
		for(j=i+1; j<n; j++){				// i���� ���Һ���, 0���� �����߱� ������ j<n �̴�.  
			if(a[j]<a[idx]){
			idx = j;						// idx�� ��������� ���� ���� ���̴�. 
			 
		}									// j for���� ������ ����  
		tmp = a[i];							// tmp�� a[i]���� ����  
		a[i] = a[idx];						// a[i] �� a[idx] ���� ����  
		a[idx] = tmp;						// a[idx]�� tmp�� �����ߴ� ���� ����  
	}
}
	
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	

	
	
	return 0;
}
