#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//����Ž�� �˰���
int main()
{
	int test_cases; //testcase�� ����

	scanf("%d", &test_cases);
	int i = 0;
	for (i; i < test_cases; i++)
	{
		int days = 0;

		int least_concert_days = 0;

		scanf("%d %d", &days, &least_concert_days);//�뿩�� �� �ִ� ���� �� N�� ������ �� �� L

		int *arr = malloc(sizeof(int)* days);
		int j = 0;
		for (j; j < days; j++)
		{
			scanf("%d", &arr[j]);//������ �뿩 ��� �迭
		}

		double sum = 0;
		j = 0;
		for (j; j < least_concert_days; j++)//sum�� �ʱⰪ
			sum += arr[j];

		double avrg = sum / least_concert_days;//avrg�ʱⰪ
		double least_avrg = avrg;
		j = 0;

		for (j; j < days - least_concert_days; j++)// n��° ������ L���� ���� ��
		{
			sum = sum - arr[j] + arr[j + least_concert_days];

			avrg = sum / least_concert_days;
			if (avrg < least_avrg)
				least_avrg = avrg;
			int k = 0;
			double local_sum = sum;
			for (k; k < j + 1; k++)//���� �����κ��� ������ ���س����� arr[0]������ avrg�� ��� ����
			{
				local_sum = local_sum + arr[j - k];
				avrg = local_sum / (least_concert_days + k + 1);
				if (avrg < least_avrg)
					least_avrg = avrg;
				
			}
		}
		printf("%lf\n", least_avrg);//�ּڰ� ��ȯ
		free(arr);
	}

}