//�����˰����� => ���� �̸� ���س���
//���������� �̺а˻��� ���� �ľ�  

//�־��� ���� ���̸���� ���ϴ� ��� = > �� ���̿� ���� �ִ�
//�� ���� 2�� ������(���⼭�� 45/2 = 23)
//23���� ���� �������� Ȯ�� - > ���� �̷��� ������ �� ���� �����س��´� 
//�� �������� 1~22 �� ���� 11�� ��� - >�Ұ���
//���� 12~22���̿� �ִ�.  
//34/2 = >17�� ���� �������� Ȯ�� =-> ���� �׷��� 23�� �����ߴ� ������ 17�� ��ü 
//12~16(17�̻��� ��� ��������) /2�ؼ� Ȯ�� 14�������� Ȯ�� = >�Ұ� 
//�׷��� ���� 17  

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int a[1001], n; 
											//�䱸 dvd ������ ����ϴ� �Լ�  
int Count(int s){							//dvd �Ѱ��� �뷮�� s�� ����(mid)   
	int i, cnt=1, sum=0; 					//cnt = dvd���� , sum = ��ȭ ���� �ð�  
	for(i=1; i<=n; i++){
		if(sum+a[i]>s){						//���� ��ȭ��(sum) �� a[i]�� �߰��߶� (���� a[i]�� ������ ����) dvd �뷮���� ū ���  
			cnt++;							//dvd ���� �߰� (���ο� dvd���� �ٽ� ����) 2��° ... 
			sum=a[i];						//������ if�� ���ǿ��� �� �� �����̿��� a[i]���� ���ο� dvd�� ��ȭ(sum�� �ʱ�ȭ ��Ŵ���ν� �ذ�)  
		}
		else{
			sum = sum+a[i];					//���� �ʴ´ٸ� sum���� ������ ��Ų��  
		}
	}
	return cnt;	
} 




int main() {
	freopen("input.txt", "rt", stdin);
	int m, i, lt=1, rt=0, mid, res, maxx=-2147000000;//mid = ���� ���� �߰������� ���� �ּҰ�  
	
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		rt = rt + a[i];						//�� ���� �ð� ���ϴ� ��(������) =>45��  
		if(a[i]>maxx){						//mid���� ������ ���� �� ���� ���̺��ٴ� ũ�� (dvd�뷮�� ���� �� ���� ũ�⺸�� Ŀ�� �Ѵ�)  
			maxx=a[i];
		}
	}
	while(lt<=rt){							//�������� �˻� ��  
		mid=(lt+rt)/2;						//mid�� ���� �Ǵ����� Ȯ��  (dvd�ּҿ뷮)  
		if(mid>=maxx && Count(mid)<=m){		//mid�� count �Լ��� �ѱ� �׸��� ��ȯ dvd ���� ���� �־��� ������ �۰ų� ���� ��� �� 
			res = mid;						//res = �ӽ� ���� �����ϴ� ����  (�� ���� ���̳����� res�� ����� ���� ��ü�ȴ� ) 
			rt=mid-1;						//�׸��� �������� ������ �̺а˻� �ٽ� �Ѵ�  
		}
		else {
			lt=mid+1;						//if������ ���� ��� ū���� ������ �̺а˻�  
			
		}
	}
	printf("%d\n", res);	
	
	
	
	
	
	return 0;
}