//int형 변수를 선언하여 A = 1 혹은 B=2 가 이길때마다 갱신하게끔 하면 
//마지막에 이긴 사람의 경우 해당 변수에 저장된 값을 기준으로 판단하게끔 하면된다. (초기화는 모두 비긴걸 생각하여 D=0으로 한) 

#include <stdio.h>

int main() {
	freopen("input.txt", "rt", stdin);
	int i, as=0, bs=0, lw=0, a[10],b[10]; 	//lw는 마지막에 이긴사람을 판별하는 변수로 초기화는 모두 비겼을 것을 가정하여 0으로 지정 
	
	
	for(i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<10; i++)
	{
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<10; i++){					//각각의 원소를 비교해야 하니까 for문 돌림 
		if(a[i]>b[i]){
			as=as+3;						//승자 점수 +3 
			lw=1;							//마지막에 이긴게 A인 경우 1로 지정됨  
		}
		else if(a[i]<b[i]){
			bs=bs+3;
			lw=2;							//마지막에 이긴게 B인경우 2로 지정됨  
		}
		else{
			as+=1;							//비겼을 경우 모두 승점 +1증가  
			bs+=1;
		}
	}
	printf("%d %d\n", as, bs); 
	
	if(as==bs){
		if(lw==0){
			printf("D\n");
		}
		else if(lw==1){
			printf("A\n");
			
		}else{
			printf("B\n");
		}
	}
	else if(as>bs){
		printf("A\n");
		
	}else{
		printf("B\n");
	}
	
	
	
	
	
	
	
	return 0;
}

