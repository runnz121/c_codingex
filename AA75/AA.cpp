#include<stdio.h>
#include<algorithm>
#include<queue>
#include<vector>



//�ִ����� ��� �����Ḧ �־���� ���� ū ��������� ����
//�� 3 > 2 >1�� ������ �Ųٷ� �ְ� ����  


using namespace std;
struct Data{									//����ü ����  
	int money;
	int when;
	Data(int a, int b){							//������(�Ű������� �ִ�  
		money=a; 								
		when=b;
	}
	bool operator<(const Data &b)const{			//���ı��� ����  
		return when>b.when;						//when = this
	}	
};
int main(){
	freopen("input.txt", "rt", stdin);
	int n, i, j, a, b, res=0, max=-2147000000;	
	vector<Data> T;								//����ü�� �����ϴ� ����   
	priority_queue<int> pQ;						//�켱���� ť  
	scanf("%d", &n);							
	for(i=1; i<=n; i++){
		scanf("%d %d", &a, &b);					//������ : ��¥  
		T.push_back(Data(a, b));				//���Ϳ� ȣ���� ������ ����  
		if(b>max)
			max=b;								//max = ������ ������ ��¥  
	}
	sort(T.begin(), T.end());	
	j=0;
	for(i=max; i>=1; i--){						//�����ϴ� ��¥ Ž�� (i=������¥)  
		for( ; j<n; j++){
			if(T[j].when<i) break;				//��¥�� ũ�ų� �����͸� �ִ´� 	
			pQ.push(T[j].money);
		}
		if(!pQ.empty()){	
			res+=pQ.top();						//���� ū���� ����  
			pQ.pop();							//������ ���� ť���� ����  
		}
	}
	printf("%d\n",res);
	return 0;
}
