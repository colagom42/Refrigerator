#include <stdio.h>
#include <string.h>

int main()
{	
	char sound[16];
	char ascn_sound[16] = { "1 2 3 4 5 6 7 8" };
	char dscn_sound[16] = { "8 7 6 5 4 3 2 1" };

	scanf("%[^\n]", sound);
	if (strcmp(sound, ascn_sound) == 0)
		printf("ascending\n");
	else if (strcmp(sound, dscn_sound) == 0)
		printf("descending\n");
	else
		printf("mixed\n");

	return 0;
}
