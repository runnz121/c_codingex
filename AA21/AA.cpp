//int�� ������ �����Ͽ� A = 1 Ȥ�� B=2 �� �̱涧���� �����ϰԲ� �ϸ� 
//�������� �̱� ����� ��� �ش� ������ ����� ���� �������� �Ǵ��ϰԲ� �ϸ�ȴ�. (�ʱ�ȭ�� ��� ���� �����Ͽ� D=0���� ��) 

#include <stdio.h>

int main() {
	freopen("input.txt", "rt", stdin);
	int i, as=0, bs=0, lw=0, a[10],b[10]; 	//lw�� �������� �̱����� �Ǻ��ϴ� ������ �ʱ�ȭ�� ��� ����� ���� �����Ͽ� 0���� ���� 
	
	
	for(i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<10; i++)
	{
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<10; i++){					//������ ���Ҹ� ���ؾ� �ϴϱ� for�� ���� 
		if(a[i]>b[i]){
			as=as+3;						//���� ���� +3 
			lw=1;							//�������� �̱�� A�� ��� 1�� ������  
		}
		else if(a[i]<b[i]){
			bs=bs+3;
			lw=2;							//�������� �̱�� B�ΰ�� 2�� ������  
		}
		else{
			as+=1;							//����� ��� ��� ���� +1����  
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

