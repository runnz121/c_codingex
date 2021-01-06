//�̺а˻� => ���� �ʿ�
//�̺а˻��� 2���� ������ �ʿ��ϴ� 1�����迭���� �糡�� ����Ŵ 
//lt = 0 idx ����Ŵ, rt = n idx����Ŵ 
//mid = ����(�迭�� �߰��� ����Ŵ)   => (lt+rt)/2 (������) 


#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	
	int n, i, key, lt=0, rt, mid, tmp;			
	
	scanf("%d %d", &n, &key);				//�� �迭����, ã�� ��  
	vector<int> a;							//�̷��� ������ �̸��� ���� ������ ����  
	for(i=0; i<n; i++){
		scanf("%d", &tmp);
		a.push_back(tmp);					//���Ϳ� �ڿ������� <<�������� �ڷ� �߰�  
	} 
	//printf("%d\n", *a.begin());			//������ ó�� ���  
	sort(a.begin(), a.end());				//a.begin() : idx 0�� ����Ű�� �ݺ���(������)  a.end() idx ������ �ٷ� �ڸ� ����Ű�� �ݺ���(������)  
	rt=n-1;
	while(lt<=rt){
		mid = (lt+rt)/2;
		if(a[mid]==key){
			printf("%d\n", mid+1);			//�ڷḦ ã�� ��� 
			return 0;						//�ٷ� ���� 
		}
		else if(a[mid]>key){
			rt=mid-1;
		}
		else{
			lt= mid+1;
		}
	}

	
	
	
	return 0;
}

/*	int n,m,i,j;
	
	scanf("%d %d", &n,&m);
	
	vector<int>	a(n);	
	
	
	for(i=0; i<n; i++){		
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());
	
	
	if((a[n]/2)>m){
		for(i=0; i<(a[n]/2); i++){
			if(a[i]==m){
				printf("%d", i);
			}
			
			
		}
	}else{
		for(i=(n/2); i<n; i++){
			if(a[i]==m){
				printf("%d", i);
			}
		}
	}
	*/
