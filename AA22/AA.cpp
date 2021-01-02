//배열이 i, i+1, i+2가 있다면 (i+1) + (i+2) - (i)  이렇게 해주면 2개씩 더하는 게된다. 
//이중 for문 없이 O(n)으로 계산하는 법  

#include <stdio.h>
#include <vector> 								//메모리 동적으로 지정 들어오는 크기만큼 자동으로 배열 크기 지정 

using namespace std;
int main()	{
	freopen("input.txt", "rt", stdin);	
	int n, k, i, sum=0, max; 					//n은 배열 크기, k만큼 연속으로 더함  
	scanf("%d %d", &n, &k);
	
	vector<int> a(n);							//n크기만큼 배열 생김 기본으로 0초기화됨 
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<k; i++){							//첫번쨰 연속된 구간의 크기 (두 원소의 합) 
		sum+=a[i];	
	}
	
	max=sum;									//첫번쨰 구간의 합을 max로 지정 (초기화)  max = -1(주어진 예제에서)  
	
	for(i=k; i<n; i++){							//위의 설명한 방법대로 1,2,3 의 순서에서 1+2+3-1 방식으로 계산  
		
		sum=sum+(a[i]-a[i-k]);					//3,-2,4 이면 sum 현재 1이다 여기서 i가 2면 -1+a[2]-a[0] 즉 1-4-3 =-6이다   
		if(sum>max) max=sum;					//max값 교체 -6>-1 임으로 교체 안됨  이런식으로 max값 교체  
	}
	
	printf("%d\n", max);
	
	
	
	return 0;
}
