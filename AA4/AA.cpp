// for�� �������� �Է°��� �ִ� �ּ����� ����  

#include <iostream>

using namespace std;

int main() {
	
	freopen("input.txt","rt",stdin);					//txt���� ������ ����  ä���Ҷ� �� ���� �ּ�ó�� �� ������  
	
	int n, i, a, max = -2147483647, min = 2147483647;   //���� ū���� �������� �ݴ� ������ �ʱ�ȭ ������ ó�� ������ �޴� ���ڸ� max, min �� ��� �Ҵ��ϱ� ����  
	
	cin >> n;											//�� ��� ���ڸ� ���� ������ �Է¹���  
	for(i = 1; i<=n; i++){
		
		cin >>a;										//���� �� ���ڸ� �Է� ����  
		
		if(a>max) max =a;								//max�� ���� ���� ���� �Ǿ��� ���� , ó�� ���ڴ� ������ ��(���⼭�� 13)  
		if(a<min) min =a;								//min�� ���� ū ���� �Ǿ��� ���� ó�� ���ڴ� ������ ��  (���⼭�� 13) 
														//�־��� ���ڰ� 13 15 34 23 �϶� ó�� ������ 13��
														//1��° min : 13 max : 13 �̴�  
														//2��° min : 13 max : 15 �̴� 
														//������ ���� min : 13 max : 34
}														//�� min / max �濡 �� ���ڸ� �ְ� �������� ������ ���ڿ� ���Ͽ��� ��ü�ϴ� ����  

cout << max-min;
	
	
	return 0;
}