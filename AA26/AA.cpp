#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


int main()	{	
	freopen("input.txt", "rt",stdin);
	int i,j,n,cnt=0;					//cnt = 자기 등수 출력  
	
	scanf("%d",&n);
	vector<int> a(n+1);					//인덱스가 0부터 n까지 생성하기 위함 인덱스 1번부터 사용  
	
	for(i=1; i<=n; i++){				//인덱스 1번부터 사용  
		scanf("%d",&a[i]);
	}
	
	
	printf("1 ");						//첫번째 사람은 그냥 1등  
	
	for(i=2; i<=n; i++){				//2등부터 시작  
		cnt=0;							//j for문 돌기전 초기화 시킴 사람마다 등수 초기화 하기 위함   
		for(j=i-1; j>=1; j--){			//자기기준 바로 앞부터 돌면서 확인하기 위해 i-1로 초기화   
			if(a[j]>=a[i]){				//i가 주인공  
				cnt++;
			}
		}
		printf("%d ", cnt+1);
	}

	return 0;
}
