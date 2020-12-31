#include <stdio.h>

int main()
{
	freopen("input.txt", "rt", stdin);

	int n, i, cnt = 0, tmp;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		tmp = i;						//i는 계속 for문을 돌아야 하기 때문에 임시 변수 tmp가 필요하다
		while (tmp > 0)
		{
			tmp = tmp / 10;				//몫 구하기
			cnt++;						//몫이 구해질때마다 1씩 증가 => 각 자리수의 갯수를 센다

		}

	}
	printf("%d\n", cnt);

	return 0;
}