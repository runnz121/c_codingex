#include <iostream>
#include <vector>
#include <algorithm>					//sort��� ����  

//����ü�� �̿��� STL Vector����
 
using namespace std;

struct Loc{								//����ü ����  
	int x, y, z;
	Loc(int a, int b, int c){			//������ ���� (����ü �̸��� ���ƾ���)  
		x=a;
		y=b;
		z=c; 
	}
	bool operator<(const Loc &b)const{	//����ü�� �ּҷ� �޴´�, �Լ� �ڿ� const�� �Լ��� �����ϸ� �ɹ� ������ x, y, z�� ���� �� �� �� ���� //�� const 2�� ���� �������  
		return x<b.x; 					//�������� ����(�տ��� �۰� �ڿ��� ũ���� �����϶�)  
		
		if(x!=b.x) return x<b.x;		//x�� ���� ������ �Լ� ���� 
		if(y!=b.y) return y<b.y;		//x���� ���� ��� y���� ���� ���� 
		if(z!=b.z) return z<b.z;		//
	}
};

int main() {

	vector<Loc> XY;						//�� ���Ϳ� �Ʒ� ����ü 5���� ����  
	XY.push_back(Loc(2,3,5)); 			//x=2, y=3, z=5�� ����ü ��ü�� �����Ǿ� ���ͷ� ����  
	XY.push_back(Loc(3,6,7)); 
	XY.push_back(Loc(2,3,1)); 
	XY.push_back(Loc(5,2,3));
	XY.push_back(Loc(3,1,6)); 
	sort(XY.begin(), XY.end());
	for(auto pos : XY) cout<<pos.x<<" "<<pos.y<<" "<<pos.z<<endl;
	
	return 0;
}
