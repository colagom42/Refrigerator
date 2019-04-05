#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//완전탐색 알고리즘
int main()
{
	int test_cases; //testcase의 갯수

	scanf("%d", &test_cases);
	int i = 0;
	for (i; i < test_cases; i++)
	{
		int days = 0;

		int least_concert_days = 0;

		scanf("%d %d", &days, &least_concert_days);//대여할 수 있는 날의 수 N과 섭외한 팀 수 L

		int *arr = malloc(sizeof(int)* days);
		int j = 0;
		for (j; j < days; j++)
		{
			scanf("%d", &arr[j]);//공연장 대여 비용 배열
		}

		double sum = 0;
		j = 0;
		for (j; j < least_concert_days; j++)//sum의 초기값
			sum += arr[j];

		double avrg = sum / least_concert_days;//avrg초기값
		double least_avrg = avrg;
		j = 0;

		for (j; j < days - least_concert_days; j++)// n번째 값부터 L개의 값의 합
		{
			sum = sum - arr[j] + arr[j + least_concert_days];

			avrg = sum / least_concert_days;
			if (avrg < least_avrg)
				least_avrg = avrg;
			int k = 0;
			double local_sum = sum;
			for (k; k < j + 1; k++)//위의 합으로부터 앞으로 더해나가며 arr[0]까지의 avrg를 모두 구함
			{
				local_sum = local_sum + arr[j - k];
				avrg = local_sum / (least_concert_days + k + 1);
				if (avrg < least_avrg)
					least_avrg = avrg;
				
			}
		}
		printf("%lf\n", least_avrg);//최솟값 반환
		free(arr);
	}

}