//�̿� �μ��� ���ϴ� �������� �̿�  
//��������� �ٲ�������, ����� ������ �������� ���� ����̸� �μ��� �ٲ۴� 
 
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	
	int a[101], n,i,j,tmp;
	
	scanf("%d" , &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	} 
	
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1; j++){
			if(a[j]>0 && a[j+1]<0){				//���� ����̰�, �� ���� ������ ��쿡  
				tmp = a[j];						//�ӽú����� ���� ����� �ְ� 
				a[j] = a[j+1];					//���� ������� �ڿ� �������� �ְ�(�ε��� ����) 
				a[j+1] = tmp;					//���� �ε��� ���� ���� ������ �־��ش�  
			}
		}
	}
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	
	
	return 0;
}
