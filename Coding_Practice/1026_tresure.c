#include <stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b);

int main()
{
	int sum = 0;
	int case_num;
	scanf("%d", &case_num);

	int *A_arr = malloc(sizeof(int) * case_num);
	int *B_arr = malloc(sizeof(int) * case_num);
	for (int i = 0; i < case_num; i++)
	{
		scanf("%d", &A_arr[i]);
	}
	for (int i = 0; i < case_num; i++)
	{
		scanf("%d", &B_arr[i]);
	}
	
	qsort(A_arr, case_num, sizeof(int), compare);
	qsort(B_arr, case_num, sizeof(int), compare);
	for (int i = 0; i < case_num; i++)
	{
		sum = sum + A_arr[i] * B_arr[case_num - i - 1];
	}
	printf("%d\n", sum);
	
}
int compare(const void *a, const void *b) 
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if (num1 < num2)
		return -1;

	if (num1 > num2) 
		return 1;

	return 0;
}

