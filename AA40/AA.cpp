// �迭 �ΰ��� �Է¹��� ���� '����'�� ���·� �ִ´� 

// a = 2  3  5  7  10	//���⼭ 2�� �����������ε� b�迭�� ������ �� 2�� ���� �׷��� ���⿡ �ε��� �� 1 ������Ų�� 	 
// b = 3  5 10 12  17	//�������� 3�ε� ���� �׷� c�� �ְ� �� �迭�� �ε������� 1�� ������Ų��(���ÿ�)  
// c = 3  5 10 			//a, b�� �ϳ��� �迭�� ������ ���̻��� �������� �������� ����  


#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	freopen("input.txt", "rt", stdin);
	int n, m, i, j,p1=0, p2=0, p3=0;
	
	scanf("%d", &n);
	vector<int> a(n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());				//�ڵ����� �������� ���� <algorithm> header���� ����(quick����) a.begin(ó������) a.end(������)  


	scanf("%d", &m);
	vector<int> b(m),c(n+m);
	for(i=0; i<n; i++){
		scanf("%d", &b[i]);
	}
	sort(b.begin(), b.end());
	
	
	
	
	while(p1<n && p2<m){
		
		if(a[p1]==b[p2]){					//�������� ���  
			c[p3++]=a[p1++];
			p2++;							//p1�� ������ ������������ p2�� ���⼭ ���������ָ��( ���� ����)  
		}
	 	else if(a[p1]<b[p2])				//p1�� ���� ��� ���� �� ������Ŵ  
		{
			p1++;
		
		}
		else{
			p2++;
		}
		
	}
	
	for(i=0; i<p3; i++){					//p3 �� �ְ� ���������� ������ ���� �� �������� ����Ű�� �ֱ� ������ �� ������ ����  
		printf("%d ", c[i]);
	}
	
	
	
	
	
	
	
	return 0;
}
