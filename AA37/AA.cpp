#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int c[20];										//ĳ���޸� �迭 �ʱ�ȭ = 0 
int main() {
	freopen("input.txt", "rt", stdin);
	int s, n, a, i, j, pos;
	
	scanf("%d %d", &s, &n);
	
	
	for(i=1; i<=n; i++){
		scanf("%d", &a);
		
		pos=-1;									//miss �� ��츦 ����ؼ� -1�� �ʱ�ȭ miss�� pos�� -1�״�� �̱� ���� -> �� �Ʒ� for ���� ���� ����  
		
		for(j=0; j<s; j++){						//HIT ���� MIss ���� �Ǵ�  
			if(c[j]==a){						//a�۾��� ĳ�ÿ� �ִ� ��� cache hit  (�� ���� �۾��� �̹� ĳ�ÿ� �����ϴ� ��� ) 
				pos=j;							//pos�� a�� �ִ� j�ε��� ���� (hit�� ����) 
			}
		}
		
		if(pos==-1){							//miss �� ��� -1�� ���������� �� for ���� ����  
			for(j=s-1; j>=1; j--){
				c[j]=c[j-1];
			}
		}
		else{									//hit�� ��� �� for��������  
			for(j=pos; j>=1; j--){
				c[j]=c[j-1];
			}
		}
		
		c[j]=a;									//������ ���� cache �迭�� ����  
	}
	
	
	
	for(i=0; i<s; i++){
		printf("%d ", c[i]);
	}

	
	

	
	
	
	return 0;
}
