//��������  
//for�� i�� �ε��� 1������ ����(0���ƴ�)
 

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	
	int a[101], n, tmp, i, j;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=1; i<n; i++){						//n �������� ���� 
	
		tmp = a[i]; 						//�ӽú��� tmp�� ���Ұ��� �����ϰ� �̰��� �迭�� ���Ұ��� �� ��Ŵ  
	
		for(j=i-1; j>=0; j--){ 				//j�� i���� ��ĭ �� �պ��� ���� �׸��� j�� �����ϸ鼭 ���� �� i = >>����, j��  <<�������� �ڿ��� ������ ���鼭 �� ��  
			if(a[j]>tmp) {					//a[j]�� tmp���� ū ���  �� 
				a[j+1]=a[j];				//a[j]�� ���� �ڷ� ��ĭ �δ�  
				
			}else{
				break;
			}
		}
		a[j+1] = tmp;						//�и��� �� ������ tmp�� �ִ´� ��
											//	7 5 6 9 8 4 ����
											//	tmp = a[i] = 5 �� ����	 
											// 	a[0] = 7 > 5�� ��� 
											// 	7 7 6 9 8 4 (5�� tmp�� ����ִ�) 
	}										//	5 7 6 9 8 4 (tmp�� �������� a[0]�� �־��ش� �� �ٲ� 
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	
	
	
	return 0;
}
