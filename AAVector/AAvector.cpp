//���͸� �����ϴ� �������� ���

#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	freopen("input.txt", "rt", stdin);
	
	
//	vector<int> a(5);					//int �ڷ����� �����ϴ� ũ�Ⱑ 5�� a���� ����(����� 5�̸鼭 0���� �ʱ�ȭ��, �޸� ����)  
//	a.push_back(6);						//�� ���� �ڿ� 6�� �߰� 
//	a.push_back(8);						//6�ڿ� 8�߰�
//	a.push_back(11);
//	cout<<a.size()<<endl;				//size�� ������ ũ�⸦ ��� 
//	cout<<a[1]<<endl;
	
//	int n;								
//	cin>>n;								//���� ������ �Է�  
//	vector<int> a(n);					
//	cin>>a[i]							//���� ���� �Է�  

//	vector<int> c[3];					//���ȣ�� ���������� c�̸��� ���� ���Ͱ� 3���� �����ȴٴ� ��  
//										//c[0] , c[1], c[2] �̷��� 3�� ����  
//	c[0].push_back(1);
//	c[0].push_back(2);
//	c[0].push_back(3);
//	c[1].push_back(2);
//	c[1].push_back(4);
//	c[2].push_back(6);
//	c[2].push_back(7);
//	
//	cout <<c[1][1]<<endl;
//	cout <<c[2][0]<<endl;

	vector<pair<int, int> > g[3];      //pair �� : first, second�� ���� , g[0], g[1], g[2] �� ���� 3���� ���Ͱ� ����  
	g[1].push_back({3,5});		  	   //a.first = 3, a.second = 5
	g[1].push_back({4,7});
	g[1].push_back({3,9});
	g[2].push_back(make_pair(7,7));		//g[2]�� 0�� �ε����� (7,7)�� ��  
	cout<<g[2][0].first<<" "<<g[2][0].second<<endl;
	
	return 0;
} 
