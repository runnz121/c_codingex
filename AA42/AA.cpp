//이분검색 => 정렬 필요
//이분검색은 2개의 변수가 필요하다 1차원배열에서 양끝을 가르킴 
//lt = 0 idx 가르킴, rt = n idx가르킴 
//mid = 변수(배열의 중간을 가르킴)   => (lt+rt)/2 (정수형) 


#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	
	int n, i, key, lt=0, rt, mid, tmp;			
	
	scanf("%d %d", &n, &key);				//총 배열갯수, 찾을 값  
	vector<int> a;							//이렇게 적으면 이름만 있지 공간은 없다  
	for(i=0; i<n; i++){
		scanf("%d", &tmp);
		a.push_back(tmp);					//백터에 뒤에서부터 <<방향으로 자료 추가  
	} 
	//printf("%d\n", *a.begin());			//포인터 처럼 출력  
	sort(a.begin(), a.end());				//a.begin() : idx 0을 가르키는 반복자(포인터)  a.end() idx 마지막 바로 뒤를 가르키는 반복자(포인터)  
	rt=n-1;
	while(lt<=rt){
		mid = (lt+rt)/2;
		if(a[mid]==key){
			printf("%d\n", mid+1);			//자료를 찾은 경우 
			return 0;						//바로 종료 
		}
		else if(a[mid]>key){
			rt=mid-1;
		}
		else{
			lt= mid+1;
		}
	}

	
	
	
	return 0;
}

/*	int n,m,i,j;
	
	scanf("%d %d", &n,&m);
	
	vector<int>	a(n);	
	
	
	for(i=0; i<n; i++){		
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());
	
	
	if((a[n]/2)>m){
		for(i=0; i<(a[n]/2); i++){
			if(a[i]==m){
				printf("%d", i);
			}
			
			
		}
	}else{
		for(i=(n/2); i<n; i++){
			if(a[i]==m){
				printf("%d", i);
			}
		}
	}
	*/
