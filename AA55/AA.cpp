//교차로 배열을 만든다, B도시 배열을 만든다(이때는 1,2,3,4, 순서대로 배열)  
//A도시 출발해서 교차로 들어갔을 때, 교차로의 배열이 B도시의 순서배열과 같은지 확인한다
//인덱스 하나를 주어, 교차로 맨 아래 (스택맨 아래) 와 B도시 배열이 같은 경우 pop하고 index 하나 증가
//그렇지 않다면 push만   


#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);	 
	stack<int> s;
	int i,j=1, n, m;						//j는 인덱스 
	scanf("%d", &n);
	/*vector<int>	a(n+1);					//B도시(도착)배열 
	for(i=1; i<=n; i++) {					//1,2,3,4, 를 백터 배열에 넣는다(도착도시) 
		a[i]=i;
	}*/
	vector<char> str;
	for(i=1; i<=n; i++) {
		scanf("%d", &m);					//출발하는 기차를 읽는다  
		s.push(m);							//교차로에 넣는다  
		str.push_back('P');					//push_back : 백터의 배열 뒤에 자료를 넣어준다  
		while(1) {
			if(s.empty()) break;
			if(j==s.top()){					//j가 a[j]역할을 대신한다  
				s.pop();
				j++;
				str.push_back('O');
			} 
			else break;
		}				 
	}
	if(!s.empty()) printf("impossible\n");	//스택이 비어있지 않는 경우  
	else{
	
		for(i=0; i<str.size(); i++) printf("%c", str[i]);
}
	
	
	
	
	return 0;
} 
