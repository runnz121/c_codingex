//백터를 생성하는 여러가지 방법

#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	freopen("input.txt", "rt", stdin);
	
	
//	vector<int> a(5);					//int 자료형을 저장하는 크기가 5인 a백터 생성(사이즈가 5이면서 0으로 초기화됨, 메모리 차지)  
//	a.push_back(6);						//빈 백터 뒤에 6을 추가 
//	a.push_back(8);						//6뒤에 8추가
//	a.push_back(11);
//	cout<<a.size()<<endl;				//size는 백터의 크기를 출력 
//	cout<<a[1]<<endl;
	
//	int n;								
//	cin>>n;								//백터 사이즈 입력  
//	vector<int> a(n);					
//	cin>>a[i]							//백터 원소 입력  

//	vector<int> c[3];					//대괄호로 지정했을시 c이름을 갖는 벡터가 3개가 생성된다는 뜻  
//										//c[0] , c[1], c[2] 이렇게 3개 생성  
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

	vector<pair<int, int> > g[3];      //pair 형 : first, second로 접근 , g[0], g[1], g[2] 와 같은 3가지 백터가 생김  
	g[1].push_back({3,5});		  	   //a.first = 3, a.second = 5
	g[1].push_back({4,7});
	g[1].push_back({3,9});
	g[2].push_back(make_pair(7,7));		//g[2]의 0번 인덱스에 (7,7)이 들어감  
	cout<<g[2][0].first<<" "<<g[2][0].second<<endl;
	
	return 0;
} 
