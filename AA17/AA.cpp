#include <stdio.h>

using namespace std;

int main() {
	
	 
	
	freopen("input.txt","rt",stdin);
	int n, sum=0, i, j, m, ans;				//n = ��ü test��	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)						//���� testcase ��  
	{
		scanf("%d %d", &m, &ans);			//���ڿ�, ���� �ѹ��� �޴´�  
	
		sum=0;								//�л����� �ʱ�ȭ ������ߵ�  
		
		for(j=1; j<=m; j++)					//�� �л��� ���� ī���� ������ ��  
		{
			sum+=j;							//�� sum �� ans�� ���ƾ���  
			
		}
		
		if(ans==sum)
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	
	
	
	
	}
	
	
	
	
	
	return 0;
}
