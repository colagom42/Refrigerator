#include <stdio.h>
int main()
{
	int line[100000];
	int line_len;
	scanf("%d", &line_len);
	int upstream_check = 1, downstream_check = 1;
	int upstream = 1, downstream = 1;


	for (int i = 0; i < line_len; i++)
		scanf("%d", &line[i]);

	for (int i = 0; i < line_len - 1; i++)
	{
		if (line[i] <= line[i + 1])
		{
			upstream++;
			if (upstream > upstream_check)
				upstream_check = upstream;
		}
		else
			upstream = 1;
	}
	for (int i = 0; i < line_len - 1; i++)
	{
		if (line[i] >= line[i + 1])
		{
			downstream++;
			if (downstream > downstream_check)
				downstream_check = downstream;
		}
		else
			downstream = 1;
	}
	if (upstream_check > downstream_check)
		printf("%d\n", upstream_check);
	else
		printf("%d\n", downstream_check);

	return 0;
}

