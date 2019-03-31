#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, temp;

	scanf("%f %f %f", &a, &b, &c);

	if (isgreaterequal(a, b) == 1)
	{
		if (isgreaterequal(c, b) == 1)

			if (isgreaterequal(a, c) == 1)
			{
				temp = b;

				b = c;

				c = temp;

			}
			else
			{
				temp = a;

				a = c;

				c = b;

				b = temp;
			}

	}
	else
		if (isgreaterequal(b, c) == 1)
		{
			if (isgreaterequal(a, c) == 1)
			{
				temp = a;

				a = b;

				b = temp;
			}
			else
			{
				temp = a;

				a = b;

				b = c;

				c = temp;
			}
		}
		else
		{
			temp = a;

			a = c;

			c = temp;
		}

	printf("%.0f\n", b);

	return 0;

}

