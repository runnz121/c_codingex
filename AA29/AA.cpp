#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int main()	{	
	freopen("input.txt", "rt",stdin);
	
	int n, tmp, i, cnt=0, digit;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		tmp = i;							//i�� ��� ���ƾߵǱ� ������ tmp�� �ӽ�����  
		
		while(tmp>0){						//tmp�� 0�̸� while�� ����  
			digit = tmp%10;					//�� �ڸ����� digit ������ ��´�. ���� �ڸ����� ����   
			if(digit ==3) cnt++;			//�� ���� 3�� ��츦 Ȯ�� 
			tmp=tmp/10;						//���� �и�  
		
		}
	}
	
	printf("%d", cnt); 
	

	return 0;
}
