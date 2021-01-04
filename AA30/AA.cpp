//각 자리 수를 기준으로 3이 몇개가 들어가는지를 세보는 방식
//식은 3보다 크거나, 같거나, 작거나 3가지 경우로 나뉜다 
//cur : 현재 구하는 자리수의 기준 , lt : cur의 왼쪽에 있는 수, rt :cur의 오른쪽에 있는 숫자  
//3보다 큰 경우 :  0~9까지 10개의 경우가 나온다 (ex 5367 에서 10의 자리의 갯수를 구하는 식 : (lt+1)*10
//3보다 작은 경우 : 맨 마지막 경우(5300대)에는 0~9가 안나온다( ex 5327에서 10의 자리 수의 갯수를 구하는 식은 : lt*10 
//3인 경우 : 맨 마지막 경우에도 0~9까지 안나온다 (ex 5337 에서 5337까지만 나온다 ,5338 ,5339가 안나온다는 뜻 ) 갯수를 구하는 식은 : (lt*10) +(rt+1) 
//자리수를 k로 치환 (lt+1)k, lt*k, (lt*k) + (rt+1) 


#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	freopen("input.txt", "rt", stdin);
	int n, lt=1, k=1, rt, res, cur;
	scanf("%d", &n);
	
	while(lt!=0) {							//lt 가 0인경우 break
									
		lt=n/(k*10);						//5367/10 = 536 =lt
		cur=(n/k)%10;						//cur = 7
		rt=n%k;								//나머지는 0
		
		
		
		if(cur>3){							//3보다 큰 경우 
			res=res+((lt+1)*k);
		}else if(cur<3){					//3보다 작은 경우 
			res=res+(lt*k);
		}else{								//3인 경우  
			res=res+((lt*k)+(rt+1));
		}
		
		k=k*10; 
	}
	
	printf("%d",res);
	
	
	
	
	
	return 0;
}
