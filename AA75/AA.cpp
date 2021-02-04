#include<stdio.h>
#include<algorithm>
#include<queue>
#include<vector>



//최대힙에 모든 강연료를 넣어놓고 값이 큰 강연료부터 뺀다
//단 3 > 2 >1일 순으로 거꾸로 넣고 생각  


using namespace std;
struct Data{									//구조체 생성  
	int money;
	int when;
	Data(int a, int b){							//생성자(매개변수가 있는  
		money=a; 								
		when=b;
	}
	bool operator<(const Data &b)const{			//정렬기준 설정  
		return when>b.when;						//when = this
	}	
};
int main(){
	freopen("input.txt", "rt", stdin);
	int n, i, j, a, b, res=0, max=-2147000000;	
	vector<Data> T;								//구조체를 저장하는 백터   
	priority_queue<int> pQ;						//우선순위 큐  
	scanf("%d", &n);							
	for(i=1; i<=n; i++){
		scanf("%d %d", &a, &b);					//강연료 : 날짜  
		T.push_back(Data(a, b));				//백터에 호출한 생성자 넣음  
		if(b>max)
			max=b;								//max = 마지막 강연할 날짜  
	}
	sort(T.begin(), T.end());	
	j=0;
	for(i=max; i>=1; i--){						//강연하는 날짜 탐색 (i=강연날짜)  
		for( ; j<n; j++){
			if(T[j].when<i) break;				//날짜가 크거나 같은것만 넣는다 	
			pQ.push(T[j].money);
		}
		if(!pQ.empty()){	
			res+=pQ.top();						//가장 큰값을 참조  
			pQ.pop();							//참조한 값을 큐에서 제거  
		}
	}
	printf("%d\n",res);
	return 0;
}
