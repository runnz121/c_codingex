//������ �迭�� �����, B���� �迭�� �����(�̶��� 1,2,3,4, ������� �迭)  
//A���� ����ؼ� ������ ���� ��, �������� �迭�� B������ �����迭�� ������ Ȯ���Ѵ�
//�ε��� �ϳ��� �־�, ������ �� �Ʒ� (���ø� �Ʒ�) �� B���� �迭�� ���� ��� pop�ϰ� index �ϳ� ����
//�׷��� �ʴٸ� push��   


#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);	 
	stack<int> s;
	int i,j=1, n, m;						//j�� �ε��� 
	scanf("%d", &n);
	/*vector<int>	a(n+1);					//B����(����)�迭 
	for(i=1; i<=n; i++) {					//1,2,3,4, �� ���� �迭�� �ִ´�(��������) 
		a[i]=i;
	}*/
	vector<char> str;
	for(i=1; i<=n; i++) {
		scanf("%d", &m);					//����ϴ� ������ �д´�  
		s.push(m);							//�����ο� �ִ´�  
		str.push_back('P');					//push_back : ������ �迭 �ڿ� �ڷḦ �־��ش�  
		while(1) {
			if(s.empty()) break;
			if(j==s.top()){					//j�� a[j]������ ����Ѵ�  
				s.pop();
				j++;
				str.push_back('O');
			} 
			else break;
		}				 
	}
	if(!s.empty()) printf("impossible\n");	//������ ������� �ʴ� ���  
	else{
	
		for(i=0; i<str.size(); i++) printf("%c", str[i]);
}
	
	
	
	
	return 0;
} 
