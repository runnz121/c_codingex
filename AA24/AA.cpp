//������ �������� 
//ch �迭���� 0,1,2,3,4 �� �־�� �Ѵ�(�Է¹��� ���ڰ� 5�̱� ����) 
//���밪 ����Ͽ� ch�迭�� �ش��ϴ� ���ڰ� ������ 0���� 1�� ��ȯ(�⺻ 0���� �ʱ�ȭ �Ǿ��ִ� ����) 

#include <stdio.h>
#include <vector>
#include <algorithm>						//���밪 ���� ���̺귯��  
using namespace std;
int main()	{	
	freopen("input.txt", "rt", stdin);		//pos�� �������� ���밪  
	int n, i, now, pre, pos;				
	scanf("%d", &n);
	vector<int> ch(n);						//ch 1���� �迭 ����//�⺻���� 0���� �ʱ�ȭ ��Ŵ  
	scanf("%d", &pre);						//ù��° ���� �б�(ex 1) 
	
	for(i=1; i<n; i++){
		scanf("%d", &now);
		pos=abs(pre-now);					//���밪 ���� ���� ����; 
		if(pos>0 && pos<n && ch[pos]==0) {	//ch[pos]==0 �� 1�� ����Ǿ������ �ߺ� ���� �ϳ��� �ִ°��� �ɷ��ֱ� ����  
			ch[pos]=1;						//ch�迭�� 0���� 1�� ��ȯ( �� �� ���� ����)  
		}else{
			printf("NO\n");
			return 0;						//if�� ���� 
		}
		
		pre = now;							//for���� ��� ������ ���� pre���� now�� �ٲ��־� �������Ұ��� Ȯ���ϰ� �� ��  
	}
	printf("YES\n");
	
	return 0;
}
