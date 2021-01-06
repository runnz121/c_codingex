//결정알고리즘 => 답을 미리 정해놓고
//가능한지를 이분검색을 통해 파악  

//주어진 곡의 길이를모두 더하는 경우 = > 이 사이에 답이 있다
//그 값을 2로 나누고(여기서는 45/2 = 23)
//23으로 답이 가능한지 확인 - > 가능 이러면 변수에 이 답을 저장해놓는다 
//그 다음에는 1~22 의 반인 11로 계산 - >불가능
//답은 12~22사이에 있다.  
//34/2 = >17로 답이 가능한지 확인 =-> 가능 그러면 23을 변수했던 저장을 17로 교체 
//12~16(17이상은 모두 답임으로) /2해서 확인 14가능한지 확인 = >불가 
//그래서 답은 17  

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int a[1001], n; 
											//요구 dvd 갯수를 계산하는 함수  
int Count(int s){							//dvd 한개의 용량을 s로 받음(mid)   
	int i, cnt=1, sum=0; 					//cnt = dvd갯수 , sum = 녹화 누적 시간  
	for(i=1; i<=n; i++){
		if(sum+a[i]>s){						//누적 녹화합(sum) 에 a[i]를 추가했때 (아직 a[i]를 더하진 않음) dvd 용량보다 큰 경우  
			cnt++;							//dvd 갯수 추가 (새로운 dvd부터 다시 시작) 2개째 ... 
			sum=a[i];						//위에서 if절 조건에서 더 할 예정이였던 a[i]부터 새로운 dvd에 녹화(sum을 초기화 시킴으로써 해결)  
		}
		else{
			sum = sum+a[i];					//넘지 않는다면 sum으로 누적합 시킨다  
		}
	}
	return cnt;	
} 




int main() {
	freopen("input.txt", "rt", stdin);
	int m, i, lt=1, rt=0, mid, res, maxx=-2147000000;//mid = 곡의 합의 중간값으로 갖는 최소값  
	
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		rt = rt + a[i];						//총 영상 시간 구하는 값(누적합) =>45분  
		if(a[i]>maxx){						//mid값은 무조건 가장 긴 곡의 길이보다는 크다 (dvd용량은 가장 긴 곡의 크기보다 커야 한다)  
			maxx=a[i];
		}
	}
	while(lt<=rt){							//엇갈리면 검색 끝  
		mid=(lt+rt)/2;						//mid가 답이 되는지를 확인  (dvd최소용량)  
		if(mid>=maxx && Count(mid)<=m){		//mid를 count 함수로 넘김 그리고 반환 dvd 갯수 값이 주어진 값보다 작거나 같은 경우 참 
			res = mid;						//res = 임시 답을 저장하는 변수  (더 작은 값이나오면 res에 저장된 값은 교체된다 ) 
			rt=mid-1;						//그리고 작은범위 쪽으로 이분검색 다시 한다  
		}
		else {
			lt=mid+1;						//if조건이 불인 경우 큰범위 쪽으로 이분검색  
			
		}
	}
	printf("%d\n", res);	
	
	
	
	
	
	return 0;
}
