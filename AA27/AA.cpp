//ch�迭�� ���� ���丮���� ���Ҹ� ���μ� �����Ͽ�
//�ʱ�ȭ�� ������ ++�����ش�  

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int main()	{	
	freopen("input.txt", "rt",stdin);
	int i,j,n,tmp;
	scanf("%d", &n);
	vector<int>	ch(n+1);				//n�� ��µǾ�� �ϱ� ������ n+1�� ���� 
	
	for(i=2; i<=n; i++){
		tmp = i;						//i�� tmp�� �ӽ� ����for���� i�� �����µ�, i���� ����Ǹ� for���� �ȵ� �� ������ �ӽ� ����  
		j=2;							//n��  ���μ� ���ؽ�ų j 
		while(1){						//while�������� ������ ���� 
			if(tmp%j==0){				//�ӽú����� �����صξ��� tmp(i)�� j�� ����� �������� ex) 60(i) / 2(j) 
				tmp=tmp/j;				//tmp���� j�� ���� ���� ���� ���� ���´�.(���� ���ǿ���) 
				ch[j]++;				//�׸��� �ʱ�ȭ�� �迭��(vector ch�迭�� 0���� �ʱ�ȭ�Ǿ�����)  �ش� j�� ���Ұ� �ֱ� ������ ch���Ҹ� ������Ų��. 
										//������������ ��� j�������� ��� ���� 
			}
			else{
				j++;					//������������ �ʴ� ��� j���� 
			}
			if(tmp==1){					//���μ� ���� ����Ͽ� ���� 1�̵Ǹ� ����  
				break;
			}
		}
	}
	
	printf("%d! = ", n);
	for(i=2; i<=n; i++){
		if(ch[i]!=0){
			printf("%d ", ch[i]);
		}
	}
	
	
	
	
	return 0;
}
