//예제를 기준으로 
//ch 배열에는 0,1,2,3,4 가 있어야 한다(입력받은 숫자가 5이기 때문) 
//절대값 계산하여 ch배열에 해당하는 숫자가 있으면 0에서 1로 변환(기본 0으로 초기화 되어있는 상태) 

#include <stdio.h>
#include <vector>
#include <algorithm>						//절대값 위한 라이브러리  
using namespace std;
int main()	{	
	freopen("input.txt", "rt", stdin);		//pos는 원소차의 절대값  
	int n, i, now, pre, pos;				
	scanf("%d", &n);
	vector<int> ch(n);						//ch 1차원 배열 생성//기본으로 0으로 초기화 시킴  
	scanf("%d", &pre);						//첫번째 숫자 읽기(ex 1) 
	
	for(i=1; i<n; i++){
		scanf("%d", &now);
		pos=abs(pre-now);					//절대값 지정 변수 선언; 
		if(pos>0 && pos<n && ch[pos]==0) {	//ch[pos]==0 가 1로 선언되어야지만 중복 없이 하나만 있는것을 걸러주기 위해  
			ch[pos]=1;						//ch배열에 0에서 1로 변환( 즉 그 값이 존재)  
		}else{
			printf("NO\n");
			return 0;						//if문 종료 
		}
		
		pre = now;							//for문을 계속 돌리기 위해 pre값을 now로 바꿔주어 다음원소값을 확인하게 끔 함  
	}
	printf("YES\n");
	
	return 0;
}
