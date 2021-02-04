#include <iostream>
#include <vector>
#include <algorithm>					//sort사용 위함  

//구조체를 이용한 STL Vector정렬
 
using namespace std;

struct Loc{								//구조체 선언  
	int x, y, z;
	Loc(int a, int b, int c){			//생성자 선언 (구조체 이름과 같아야함)  
		x=a;
		y=b;
		z=c; 
	}
	bool operator<(const Loc &b)const{	//구조체를 주소로 받는다, 함수 뒤에 const로 함수를 선언하면 맴버 변수값 x, y, z의 값을 바 꿀 수 없다 //꼭 const 2개 같이 써줘야함  
		return x<b.x; 					//오름차순 정렬(앞에가 작고 뒤에가 크도록 정렬하라)  
		
		if(x!=b.x) return x<b.x;		//x가 같지 않으면 함수 종료 
		if(y!=b.y) return y<b.y;		//x값이 같은 경우 y값에 따라 정렬 
		if(z!=b.z) return z<b.z;		//
	}
};

int main() {

	vector<Loc> XY;						//이 백터에 아래 구조체 5개가 들어간다  
	XY.push_back(Loc(2,3,5)); 			//x=2, y=3, z=5인 구조체 객체가 생성되어 백터로 들어간다  
	XY.push_back(Loc(3,6,7)); 
	XY.push_back(Loc(2,3,1)); 
	XY.push_back(Loc(5,2,3));
	XY.push_back(Loc(3,1,6)); 
	sort(XY.begin(), XY.end());
	for(auto pos : XY) cout<<pos.x<<" "<<pos.y<<" "<<pos.z<<endl;
	
	return 0;
}
