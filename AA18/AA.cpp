//���������� �︮�� Ƚ���� max�����λ����Ͽ� �̰��� ���  



#include <stdio.h>


int main() {	
	freopen("input.txt","rt",stdin);
	
	int n, a, val, i, cnt=0, max=-2147000000;
	
	scanf("%d %d", &n, &val);
	
	for(i=1; i<=n; i++){
		scanf("%d", &a);
		if(a>val)
		{
			cnt++;
		}else
		{
			cnt=0;								//���ӵ� �ʸ� ���ؾ� �ϱ� ������ cnt =0���� �ʱ�ȭ �Ǿ�� �Ѵ�.  
		}
		
		if(cnt>max)
		{
			max=cnt;							//�������� ������ cnt�� �ִ밪�� ���ϴ¹�  
		}
	}
	if(max==0)									//�溸���� �ѹ��� �ȿ︰ ���  
	{
		printf("-1\n");
	}else
	{
		printf("%d", max);
	}
	
	return 0;
}
