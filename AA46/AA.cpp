#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int a[2001];
int main() {
	freopen("input.txt", "rt", stdin);
	int n, k, i, p=0, cnt=0, tot=0;				//tot = �� �۾��ð� , p =position 
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		tot=tot+a[i];							//���۾��ð� ����  
	}				
	
	scanf("%d", &k);
	if(k>=tot){
		printf("-1\n");							//��� �۾��ð��� ����
		return 0; 
	}
	
	while(1){
		p++;									
		if(p>n) {								//�迭 ȸ��  �۾�����   
			p=1;								//
		}
		if(a[p]==0){							//0�ΰ��(�۾���� �Ϸ� ) 
			continue;							//�׳� �������� 
			a[p]--;								//�۾� ����  
			cnt++;								//1�� ���� 
		}
		if(cnt==k)								//������ 
		{	
			break;								//while ���� 
		 } 
	}
	
	while(1){
		p++;
		if(p>n){
			p=1;
		}
		if(a[p]!=0){							//���� �۾��� �����ִ� ���  
			break;
		}
	}
	printf("%d\n",p);
	
	
	
	
	
	return 0;
}
