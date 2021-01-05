// 배열 두개에 입력받은 값을 '정렬'한 상태로 넣는다 

// a = 2  3  5  7  10	//여기서 2는 가장작은값인데 b배열과 비교했을 때 2가 없다 그러면 여기에 인덱스 를 1 증가시킨다 	 
// b = 3  5 10 12  17	//다음값은 3인데 같다 그럼 c에 넣고 두 배열의 인덱스값을 1씩 증가시킨다(동시에)  
// c = 3  5 10 			//a, b중 하나의 배열이 끝나면 더이상의 교집합은 없음으로 종료  


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
	sort(a.begin(), a.end());				//자동으로 오름차순 정렬 <algorithm> header에서 제공(quick정렬) a.begin(처음부터) a.end(끝까지)  


	scanf("%d", &m);
	vector<int> b(m),c(n+m);
	for(i=0; i<n; i++){
		scanf("%d", &b[i]);
	}
	sort(b.begin(), b.end());
	
	
	
	
	while(p1<n && p2<m){
		
		if(a[p1]==b[p2]){					//교집합인 경우  
			c[p3++]=a[p1++];
			p2++;							//p1은 위에서 증가했음으로 p2만 여기서 증가시켜주면됨( 동시 증가)  
		}
	 	else if(a[p1]<b[p2])				//p1이 작은 경우 작은 쪽 증가시킴  
		{
			p1++;
		
		}
		else{
			p2++;
		}
		
	}
	
	for(i=0; i<p3; i++){					//p3 는 넣고 증가임으로 마지막 원소 그 다음것을 가르키고 있기 때문에 그 전까지 돌림  
		printf("%d ", c[i]);
	}
	
	
	
	
	
	
	
	return 0;
}
