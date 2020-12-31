#include <iostream>

using namespace std;

int main() {
	
	int a, b, i, sum = 0;	 //for 문을 위한 i 
	
	cin >> a >> b;
	
	for(i = a; i<b; i++) {
		cout <<i<<" + ";	//2 + ... 형식으로 출력됨  
		sum = sum+i;		//합을 출력  
	}
	
	cout <<i <<" = "; 		//i 대신 b도 됨 i=b가 합되면 for문에선 거짓이 되기 때문에 7로 찍히고 계산은 안됨// 이 전까진 ... 6 + 으로 출려됨 이걸 ...6 + 7 = 로 출력되게끔  
	cout << sum + i;		//여기서 sum은 b전까지 수의 누적합 즉 3~6까지의 합 인데 i=7값을  더해줌 으로서 전체 합 계산  
	
	return 0;
}
