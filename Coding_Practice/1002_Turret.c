#include <stdio.h>
#include <stdlib.h>

int defcord(int a, int b, int c, int d, int e, int f);

int main()
{
	int row, col;

	col = 6;

	scanf("%d", &row);

	int **d_arr = malloc(sizeof(int*) * row);

	for (int i = 0; i < row; i++)
		d_arr[i] = malloc(sizeof(int) * col);

	for (int q = 0; q < row; q++)
		scanf("%d %d %d %d %d %d", &d_arr[q][0], &d_arr[q][1], &d_arr[q][2], &d_arr[q][3], &d_arr[q][4], &d_arr[q][5]);

	for(int i = 0; i < row; i++)
	printf("%d\n", defcord( d_arr[i][0], d_arr[i][1], d_arr[i][2], d_arr[i][3], d_arr[i][4], d_arr[i][5]));

	for (int i = 0; i < row; i++)
		free(d_arr[i]);

	free(d_arr);

	return 0;
}

int defcord(int a, int b, int c, int d, int e, int f)
{
	int cordx1 = a, cordy1 = b, cordx2 = d, cordy2 = e, r1 = c, r2 = f;
	int dist;
	int num;

	dist = (cordx2 - cordx1) * (cordx2 - cordx1) + (cordy1 - cordy2) * (cordy1 - cordy2);

	if (r1 > r2)
	{
		if (dist < ((r1 - r2) * (r1 - r2)))
		{
			num = 0;
		}
		else if (dist == ((r1 + r2) * (r1 + r2)) || dist == (r1 - r2)*(r1 - r2))
		{
			num = 1;
		}
		else if ((r1 + r2) * (r1 + r2) < dist)
			num = 0;
		else
			num = 2;
	}
	else if (r1 == r2)
	{
		if (cordx1 == cordx2 && cordy1 == cordy2)
			num = -1;
		else
		{
			if ((r1 + r2) * (r1 + r2) == dist)
				num = 1;
			else if ((r1 + r2) * (r1 + r2) > dist)
				num = 2;
			else
				num = 0;
		}
	}
	else
		if (dist < (r1 - r2) * (r1 - r2))
			num = 0;
		else if (dist == (r1 + r2) * (r1 + r2) || dist == (r1 - r2)*(r1 - r2))
		{
			num = 1;
		}
		else if ((r1 + r2) * (r1 + r2) < dist)
			num = 0;
		else
			num = 2;

	return num;
}
