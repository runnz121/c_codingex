#include <bits/stdc++.h>

using namespace std;

int n,m,a,b,c;
int dx[] = {-1,0,1,0};//북 동 남 서 x,y가 떨어진 칸이 기준임으로 -처리  
int dy[] = {0,1,0,-1};
int me[50][50];
int map1[50][50];



void left(){
	c -=1;
	
	if(c == -1){
		c == 3;
	}
}



int main(){


	int x;
	int cnt = 1;
	int mx,my;
	int turn = 0; 

	cin >> n >> m;
	cin >> a >> b >> c; //c는 바라보는 방향 
	
	me[n][m] = 1; 
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> x;
			map1[i][j] = x; //맵 받기  
		}
	}

	
	while(true){
		
		left();

		mx = a + dx[c];
		my = b + dy[c];
		
		if(me[mx][my] == 0 && map1[mx][my] == 0){
			me[mx][my] = 1;
			a = mx;
			b = my;
			cnt +=1;
			turn = 0;
			continue;
		}else{
			turn += 1;
		}
		
		if(turn == 4){
			mx = a - dx[c];
			mx = b - dy[c];
			if(map1[mx][my] == 0){
				a = mx;
				b = my;
			}
			else break;
			turn = 0;
		}		
	}
	
	

cout << cnt << '\n';
	

}
