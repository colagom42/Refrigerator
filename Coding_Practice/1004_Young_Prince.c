#include <stdio.h>
#include <stdlib.h>

int stars(int x1, int y1, int x2, int y2, int xc, int yc, int r);

int main()
{
	
	
	int row, col;

	int thr;
	scanf("%d", &row);//케이스의 개수

	int ***t_arr = malloc(sizeof(int **) * row);

	int **d_arr = malloc(sizeof(int *) * row);

	int *arr = malloc(sizeof(int) * row);

	for (int i = 0; i < row; i++)
	{
		d_arr[i] = malloc(sizeof(int) *4);
	}

	for (int i = 0; i < row; i++)
	{
		thr = 0;
		scanf("%d %d %d %d", &d_arr[i][0], &d_arr[i][1], &d_arr[i][2], &d_arr[i][3]);
		scanf("%d", &col);

		t_arr[i] = malloc(sizeof(int*) * col);

	

		for (int j = 0; j < col; j++)
		{
			t_arr[i][j] = malloc(sizeof(int) *3);
			scanf("%d %d %d", &t_arr[i][j][0], &t_arr[i][j][1], &t_arr[i][j][2]);
			thr = thr + stars(d_arr[i][0], d_arr[i][1], d_arr[i][2], d_arr[i][3], t_arr[i][j][0], t_arr[i][j][1], t_arr[i][j][2]);
		}
		arr[i] = thr;
	}

	for (int i = 0; i < row; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
int stars(int x1, int y1, int x2, int y2, int xc, int yc, int r)
{
	int num = 0;

	if ((xc - x1)*(xc - x1) + (yc - y1)*(yc - y1) < r * r && (xc - x2)*(xc - x2) + (yc - y2)*(yc - y2) < r * r)
		num = 0;
	else if ((xc - x1)*(xc - x1) + (yc - y1)*(yc - y1) > r * r && (xc - x2)*(xc - x2) + (yc - y2)*(yc - y2) > r * r)
		num = 0;
	else
		num = 1;
	return num;
}

