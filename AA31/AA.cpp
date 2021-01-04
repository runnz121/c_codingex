//char 배열로 받고 H를 기준으로 숫자화 시키면 된다  

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	
	int c=0, h=0, i, pos;						//pos : 현재 위치 나타내는 변수  c :탄소 갯수, h : 수소갯수  
	char a[101];
	
	scanf("%s", &a);
	
	if(a[1]=='H'){								//C가 1인 경우( ex CH2) 
		c=1;
		pos=1;									//H의 위치가 1이다. (숫자화작업을 위함)  
	}
	else{
		for(i=1; a[i]!='H'; i++){				//H를 만나면 끝낸다  
			c=c*10+(a[i]-48);					//숫자화 작업  c초기값은 0 따라서 c뒤의 숫자가 2자리 이상이 와도 10을 계속 곱함으로써 일의 자리 앞자리를 표현  
			
		}
		pos=i;
	}											//여기까지가 탄소의 갯수 구한것 
	
	
	if(a[pos+1]=='\0'){
		h=1;
	} else{
		for(i=pos+1; a[i]!='\0'; i++){
			h=h*10+(a[i]-48);
		}
	}
	printf("%d\n", c*12+h);
		
		

	
	
	return 0;
}
