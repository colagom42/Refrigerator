#include <stdio.h>
int main()
{
	int case_num;
	scanf("%d", &case_num);
	for (int i = 0; i < case_num; i++)
	{
		int car_price = 0;
		scanf("%d", &car_price);
		int option_vari = 0;
		scanf("%d", &option_vari);
		for (int j = 0; j < option_vari; j++)
		{
			int num_op= 0, price_op= 0;
			scanf("%d %d", &num_op, &price_op);
			car_price += num_op * price_op;
		}
		printf("%d\n", car_price);
	}

}
