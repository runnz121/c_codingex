// 1.�迭�� ���� �����Ѵ�
// 2.max��(�迭�� �� ���� ��)�� ��� for���� �����ϰ��Ͽ�
// 3.max�� ���� �ٲ���
// 4.���� �ٲ� max������ for�� ����  


#include <stdio.h>

int main() {
	
	freopen("input.txt","rt",stdin);
	
	int n, i, cnt=0, h[101], max;


	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d", &h[i]); 					//�迭���ҷ�  ���� �� �̷��� ����Ѵ� 
	}
	max=h[n];									//�迭�� �� ���� ���Ұ����� max�� �ʱ�ȭ �ڿ��� ���� ������ ���� ���̶�  
	for(i=n; i>=1; i--){
		if(h[i]>max){							//������ max������ ū ���Ҹ� ������ ���  
			max=h[i];							//max���� ��ü���ش� 
			cnt++;								//��ü Ƚ�� 
			
		}
	}	
	
	printf("%d\n", cnt);	
	
	
	return 0;
}
