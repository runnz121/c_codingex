//�迭�� �������� 0���� �ʱ�ȭ ��Ŵ
//pos�ϳ� ����
//3�϶� 1������Ŵ
//�� 1 2 3 4 5 6 7 8 
//c= 0 0 1 0 0 0 0 0
//c= 0 0 1 0 0 1 0 0 -> pos�� c=1�ΰ��� ������ �ٽ� �ʱ�ȭ 
//pos�� 9�� ������ ����(������ ����)�ٽ� ù��° �ε����� ���Բ� �ʱ�ȭ 
//�̷������� c�� 0�ΰ͸� count �ϵ� 3��° ���� 1�� �ٲ���  


#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
	freopen("input.txt", "rt", stdin);
	
	int n, k, pos=0, i, bp=0, cnt=0; 					//bp = n-1�� ��� ����  
	
	scanf("%d %d", &n, &k);
	vector<int> prince(n+1);							//1������ n������ �迭 ���� 
	
	while(1){
		pos++;
		if(pos>n) {										//pos�� 9���Ǵ� ����(8���� ������) �� �ѹ��� �� ������ �� �ٽ� while�� ���Բ� ����  
			pos=1;
		} 
		if(prince[pos]==0){
			cnt++;
			if(cnt==k){									//3��° �� ���  
				prince[pos]=1;							//1�� ���������� break(while�� ) => �ش� ���ǿ� �����ϴ� ���� �ƿ� ��Ŵ  
				cnt=0;									//�ٽ� 0���� �ʱ�ȭ�Ͽ� ó������ 3����  
				bp++;									//8���� 1�� �ƿ� ���� 7����  
			}
		}
		if(bp==n-1){									//bp�����Ҷ����� ���� �Ѹ� �ƿ�  
			break;
		}
	} 
	for(i=1; i<=n; i++){
		if(prince[i]==0){								//prince�� 0�λ��( �� ���������� ����ִ� ����)  
			printf("%d\n",i);
			break;
		}
	}
	
	
	
	return 0;
}
