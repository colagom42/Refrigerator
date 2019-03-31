#include <stdio.h>
#include <stdlib.h>

int kdef(int a);
int pow(int a, int b);
int main()
{
	int numb = 0;
	scanf("%d", &numb);
	int a = kdef(numb) + 1;
	char default_arr[3][6] = { {32, 32, 42, 32, 32, 32}, {32, 42, 32, 42, 32, 32}, {42, 42, 42, 42, 42, 32} };
	char ***cpy_arr_field = malloc(sizeof(int **)  *a);

	for (int i = 0; i < a ; i++)
	{
		int num = 3 * pow(2, i);
		int num_row = num * 2;
		cpy_arr_field[i] = malloc(sizeof(int *) *num);
		for (int j = 0; j < num; j++)
		{
			cpy_arr_field[i][j] = malloc(sizeof(int) *num_row);
		}
		if (i == 0) {
			for (int k = 0; k < 3; k++)
			{
				for (int l = 0; l < 6; l++)
				{
					cpy_arr_field[0][k][l] = default_arr[k][l];
				}
			}
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
			for (int l = 0; l < num / 2; l++)
			{
				for (int k = 0; k < num_row / 2; k++)
				{
					cpy_arr_field[i][l][num_row / 4 + k] = cpy_arr_field[i - 1][l][k];
					cpy_arr_field[i][num / 2 + l][k] = cpy_arr_field[i - 1][l][k];
					cpy_arr_field[i][num / 2 + l][num_row / 2 + k] = cpy_arr_field[i - 1][l][k];
				}
			}
		}
	}
	if(numb == 3)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 6; j++) {
				printf("%c", default_arr[i][j]);
			}
			printf("\n");
		}
	}
	else 
	{
		for (int k = 0; k < 3 * pow(2, a - 1); k++)
		{
			for (int j = 0; j < 3 * pow(2, a); j++)
				printf("%c", cpy_arr_field[a - 1][k][j]);
			printf("\n");
		}
	}
	return 0;
}
int kdef(int a)
{
	int k = 0;
	a = a / 3;
	do {
		k++;
		a = a / 2;
	} while (a > 1);
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
