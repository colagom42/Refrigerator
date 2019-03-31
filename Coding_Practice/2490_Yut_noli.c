#include <stdio.h>
int main()
{
	char yuts[3];
	for (int i = 0; i < 3; i++)
	{
		int yutnoli = 0;
		for (int j = 0; j < 4; j++)
		{
			int yut = 0;
			
			scanf("%d", &yut);
			if (yut == 1)
			{
				yutnoli++;
			}
		}
		switch (yutnoli)
			{
			case 0:
				yuts[i] = 68;
				break;
			case 1:
				yuts[i] = 67;
				break;
			case 2:
				yuts[i] = 66;
				break;
			case 3:
				yuts[i] = 65;
				break;
			case 4:
				yuts[i] = 69;
				break;
		
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%c\n", yuts[i]);
	}
	return 0;
}

