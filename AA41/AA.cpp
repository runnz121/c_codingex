//2개의 숫자로 나뉘는지 확인해보는법
//15에서 1, 2를 빼본다
//그런다음 2로 나누어준다 => 6
//그것을 1+6, 2+6 해준다 => 7 + 8 이 값이 연속된 숫자이면서 합이 15인지 확인
//이런식으로 갯수를 증가시키면서 구현하면 된다  


#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	int a, b=1, cnt=0, tmp, i;
	scanf("%d" ,&a);
	
	tmp=a;											//입력받은 숫자원형이 필요하기 때문에 임시변수에도 저장 시켜 놓는다  
	a--;											//a=15일때 여기서 14 
	while(a>0){	
		b++;										//b=2
		a=a-b;										//a=14-2 에서 a= 12가 된다  
		
		if(a%b==0){
			for(i=1; i<b; i++){						//i는 1까지돈다 (위 상황에서)  
				printf("%d + ", (a/b)+i);			//12/6+1 = 7 출력 
			}
				printf("%d = %d\n", (a/b)+i, tmp);	//12/6+2 = 8 출력(i가 1증가된 상태에서 위 for문이 끝났었기 때문  
				cnt++;
		}
		
	}
	printf("%d\n", cnt); 
		
	
	return 0;
}
