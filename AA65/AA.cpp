#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;
int map[10][10], ch[10][10];				//7*7행렬 고정, 2차원 체크배열  
int dx[4]={-1, 0, 1, 0};					//상하좌우 방향 보는 것  
int dy[4]={0, 1, 0, -1};
int cnt = 0;

void DFS(int x, int y) {
	int i, xx, yy;							//이동할 격자 좌표 변수 지정  
	
	if(x==7 && y==7){						//7*7배열임으로 도착지가 이미 정해져있음  
		cnt++;
	}
	else{
		for(i=0; i<4; i++) {
			xx=x+dx[i];						//이동할 x좌표 조건 
			yy=y+dy[i]; 					//이동할 y좌표 조건 
			if(xx<1 || xx>7 || yy<1 || yy>7){//격자가 벗어나는 경우  
				continue;	
				}				//밑의 조건을 그냥 지나감  
			if(map[xx][yy]==0 && ch[xx][yy]==0){
				ch[xx][yy]=1;				//해당 정점 넘어갈시 check 걸기  
				DFS(xx, yy);				//넘어갈 좌표  
				ch[xx][yy]=0;				//check 배열 풀기  
			}
		}
	}
}




int main() {
	freopen("input.txt", "rt", stdin);
	int i, j;
	
	//2차원 배열 받기  
	for(i=1; i<=7; i++) {
		for(j=1; j<=7; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	ch[1][1]=1;	 							//1,1 점이 시작점임으로 여기 체크 배열   
	DFS(1,1);								//시작지점  
	printf("%d\n", cnt);
	return 0;
} 
