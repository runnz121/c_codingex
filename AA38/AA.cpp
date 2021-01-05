//큰 숫자 n번부터 처리해야한다 -> for문이 -- 형태로 가야한다 
//배열 두개를 지정(os : 입력값, is= inversion 배열)
//	 1 2 3 4 5 6 7 8
//is 5 3 4 0 2 1 1 0

//os 0 0 0 0 0 0 0 8	-> 처음에 8그대로 넣는다 
//os 0 0 0 0 0 0 8 7	-> is에서 7번자리의 수만큼 8을 <<방향으로 밀고 그 밀린 i 바로 뒤에 7을 넣는다 
//os 0 0 0 0 0 8 6 7	-> 6도 자기 앞에 큰숫자가 한개만 있어야 함으로 8을 <<방향으로 1만큼 움직이고 그 자리에 6을 넣는다  
//os 0 0 0 0 8 6 5 7	-> 5는 자기 앞에 큰 숫자가 2개가 있어야 함으로 8 , 6을 <<방향으로 1만큼 움직이고 그자리에 5를 넣는다 
//이런식으로 계속 반복  

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);	
	int n, i, j, pos;
	scanf("%d", &n);
	vector<int> is(n+1), os(n+1); 			//숫자를 그대로 넣을 것이기 때문에 n+1로지정, + vector는 기본 0으로 초기화  
	
	for(i=1; i<=n; i++){
		scanf("%d", &is[i]);
	}
	
	
	for(i=n; i>=1; i--){					//n부터 작아지는 for문  
		pos = i;
		for(j=1; j<=is[i]; j++){			//j<=is[i] 의미는 자기보다 큰 숫자가 앞에 몇게 있는지를 기준으로 그만큼 for문을 돌리는 것  
			os[pos]=os[pos+1];				//i숫자 앞에 큰숫자가 있는 갯수만큼 반복문이 돌면서 그만큼 숫자를 앞으로 땡겨온다   
			pos++;							//앞으로 숫자 땡긴후 증가한 인덱스에 pos값을 넣는다  
	}
	os[pos]=i;
}

	for(i=1; i<=n; i++){
		printf("%d ", os[i]);
	}
	
	

	

	
	return 0;
}
