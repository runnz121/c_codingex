//배열 a, b두개를 선언 a는 점수 저장 배열, b는 등수 저장 배열 이때 b는 모두 1로 초기화
//이중 for문을 돌려 a[i]> a[j] 인 경우를 찾아 크다면 b배열의 값을 1씩 증가 시킴
//배열 b의 값을 출력하면 됨  

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int main()	{	
	freopen("input.txt", "rt",stdin);	
	int i, j, a[200], b[200], n;	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		b[i]=1;							//등수 배열 모두 1등이라고 초기화  
	}
	
	for(i=1; i<=n; i++) {				//a[i]가 주인공  
		for(j=1; j<=n; j++){
			if(a[j]>a[i]){				//a[j]는 상대편인다 즉 나보다 큰 경우  
				b[i]++;					//내등수가 내려간다(1등 -> 2등) 
		}
		}
	}
	
	for(i=1; i<=n; i++){
		printf("%d", b[i]);
	}
	

	return 0;
}
