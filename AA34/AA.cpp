#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	
	int n,i,j,a[101],tmp; 
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}

	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
				
			}
		}
	}
	
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	
	
	
	return 0;
}
