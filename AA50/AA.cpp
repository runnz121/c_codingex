
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int a[51][51];
int main() {
	freopen("input.txt", "rt", stdin);
	int h, w, n,m,i,j,k,s,sum=0,max=-2147000000;
	scanf("%d %d", &h, &w);
	for(i=1; i<=h; i++){
		for(j=1; j<=w; j++){
			scanf("%d", &a[i][j]);				
		}
	}
	
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=h-n+1; i++){							//i,j 이중 for문으로 격자를 돌림  
		for(j=1; j<=w-m+1; j++){
			sum=0;
			
			
			for(k=i; k<i+n; k++){						//[i][j]는 직사각형의 좌상단 꼭지점  
				for(s=j; s<j+m; s++){					//이부분에서 2,3 격자안의 오랜지나무 모두 세서 더함  
					sum=sum+a[k][s];
				}
			}
			if(sum>max){
				max=sum;
			}
		}
	}
	printf("%d\n", max);
	return 0;
}

/*
	int a,b,c,d,i,j,pos=0,sum=0, max=-2174000000;
	
	vector<vector<int> >map(a+1, vector<int> (b+1,0));
	
	scanf("%d %d", &a+1, &b+1);
	
	for(i=1; i<=a+1; i++){
		for(j=1; j<=b+1; j++){
			scanf("%d", &map[i][j]);

		}
	}
	
	scanf("%d %d", &c, &d);
	
	
	for(i=1; i<=b-d+1; i++){
			sum=0;
			pos=i;
			
		for(j=1; j<=d; j++){
			sum=sum+map[j];
			pos++;
			if(sum>max){
				max=sum;
			}
		}
	}
	printf("%d" ,max);
	
	*/
