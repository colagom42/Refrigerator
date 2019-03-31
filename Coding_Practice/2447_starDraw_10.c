#include <stdio.h>
#include <stdlib.h>

int kdef(int a);
int pow(int a, int b);
int main()
{
	int numb = 0;
	scanf("%d", &numb);
	int a = kdef(numb) + 1;
	char ***cpy_arr_field = malloc(sizeof(int **)  *a);

	for (int i = 0; i < a; i++)
	{
		int num = pow(3, i);
		int num_row = pow(3, i);
		cpy_arr_field[i] = malloc(sizeof(int *) *num);
		for (int j = 0; j < num; j++)
		{
			cpy_arr_field[i][j] = malloc(sizeof(int) *num_row);
		}
		if (i == 0) {
			cpy_arr_field[i][0][0] = 42;
		}
		else
		{
			for (int l = 0; l < num; l++)
			{
				for (int k = 0; k < num_row; k++)
				{
					cpy_arr_field[i][l][k] = 32;
				}
			}
			for (int l = 0; l < num / 3; l++)
			{
				for (int k = 0; k < num_row / 3; k++)
				{
					cpy_arr_field[i][l][k] = cpy_arr_field[i - 1][l][k];
					cpy_arr_field[i][l][num / 3 + k] = cpy_arr_field[i - 1][l][k];
					cpy_arr_field[i][l][ 2 * num / 3 + k] = cpy_arr_field[i - 1][l][k];
					cpy_arr_field[i][num / 3 + l][2 * num / 3 + k] = cpy_arr_field[i - 1][l][k];
					cpy_arr_field[i][num / 3 + l][k] = cpy_arr_field[i - 1][l][k];
					cpy_arr_field[i][2 * num / 3 + l][k] = cpy_arr_field[i - 1][l][k];
					cpy_arr_field[i][2 * num / 3 + l][num / 3 + k] = cpy_arr_field[i - 1][l][k];
					cpy_arr_field[i][2 * num / 3 + l][2 * num / 3 + k] = cpy_arr_field[i - 1][l][k];
				}
			}
		}
	}
	{
		for (int k = 0; k < pow(3, a - 1); k++)
		{
			for (int j = 0; j < pow(3, a - 1); j++)
				printf("%c", cpy_arr_field[a - 1][k][j]);
			printf("\n");
		}
	}
	return 0;
}
int kdef(int a)
{
	int k = 0;
	for (; a > 1; k++)
		a = a / 3;
	return k;
}

int pow(int a, int b)
{
	int c = 1;
	for (int i = 0; i < b; i++)
	{
		c = c * a;
	}
	return c;
}


