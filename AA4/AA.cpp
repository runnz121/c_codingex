// for문 돌때마다 입력값이 최대 최소인지 구분  

#include <iostream>

using namespace std;

int main() {
	
	freopen("input.txt","rt",stdin);					//txt파일 내용을 읽음  채점할땐 이 라인 주석처리 후 컴파일  
	
	int n, i, a, max = -2147483647, min = 2147483647;   //가장 큰수와 작은수를 반대 값으로 초기화 이유는 처음 변수로 받는 숫자를 max, min 에 모두 할당하기 위함  
	
	cin >> n;											//총 몇개의 숫자를 받을 것인지 입력받음  
	for(i = 1; i<=n; i++){
		
		cin >>a;										//비교할 각 숫자를 입력 받음  
		
		if(a>max) max =a;								//max가 제일 작은 수로 되었기 때문 , 처음 숫자는 무조건 참(여기서는 13)  
		if(a<min) min =a;								//min은 제일 큰 수로 되었기 떄문 처음 숫자는 무조건 참  (여기서는 13) 
														//주어진 숫자가 13 15 34 23 일때 처음 숫자인 13은
														//1번째 min : 13 max : 13 이다  
														//2번째 min : 13 max : 15 이다 
														//마지막 번쨰 min : 13 max : 34
}														//즉 min / max 방에 각 숫자를 넣고 다음으로 들어오는 숫자와 비교하여서 교체하는 형식  

cout << max-min;
	
	
	return 0;
}
