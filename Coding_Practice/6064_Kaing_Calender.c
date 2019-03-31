#include <stdio.h>
int gcd(int p, int q) { if (p == 0) return q; return gcd(q%p, p); }
int main()
{
	int case_num;
	scanf("%d", &case_num);
	for (int o = 0; o < case_num; o++)
	{
		int MNXY [4];
		
		scanf("%d %d %d %d", &MNXY[0], &MNXY[1], &MNXY[2], &MNXY[3]);
		int Year = -1;
		int arr = -1 ;
		int maxdiv = gcd(MNXY[0], MNXY[1]);
		int M = MNXY[0] * MNXY[1] / maxdiv;
		if (MNXY[1] == 1)
		{
			Year = MNXY[2];
			goto jump;
		}
		for(int i = 0; M >= arr; i++)
		{
			
			if (arr % MNXY[1] == 0)
			{
				Year = arr + MNXY[3];
				break;
			}
			arr = MNXY[2] - MNXY[3] + MNXY[0] * i;
		}
	jump :
		printf("%d\n", Year);
	}
	
	return 0;
}

