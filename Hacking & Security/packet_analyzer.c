#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char hex1[3] = { 0 };
char hex2[3] = { 0 };
char hex3[3] = { 0 };
char hex4[3] = { 0 };
int sequence[4] = { 3, 0, 0, 0 };
void decimal_to_hex1_text(int a)
{

	int i = 0;
	for (i; i < 2; i++)
	{
		if (a % 16< 10)
			hex1[i] = a % 16 + 48;
		else
			switch (a%16)
			{
			case 10: hex1[i] = 65; break;
			case 11: hex1[i] = 66; break;
			case 12: hex1[i] = 67; break;
			case 13: hex1[i] = 68; break;
			case 14: hex1[i] = 69; break;
			case 15: hex1[i] = 70; break;
			}
		a = a / 16;
	}
	char temp = 0;
	temp = hex1[0];
	hex1[0] = hex1[1];
	hex1[1] = temp;

	if (strcmp(hex1, "ff") == 0)
	{
		sequence[0] = 0;
		sequence[1]++;
	}
}
void decimal_to_hex2_text(int a)
{

	int i = 0;
	for (i; i < 2; i++)
	{
		if (a % 16 < 10)
			hex2[i] = a % 16 + 48;
		else
			switch (a % 16)
			{
			case 10: hex2[i] = 97; break;
			case 11: hex2[i] = 98; break;
			case 12: hex2[i] = 99; break;
			case 13: hex2[i] = 100; break;
			case 14: hex2[i] = 101; break;
			case 15: hex2[i] = 102; break;
			}
		a = a / 16;
	}
	char temp = 0;
	temp = hex2[0];
	hex2[0] = hex2[1];
	hex2[1] = temp;

	if (strcmp(hex2, "ff") == 0)
	{
		sequence[1] = 0;
		sequence[2]++;
	}
}
void decimal_to_hex3_text(int a)
{

	int i = 0;
	for (i; i < 2; i++)
	{
		if (a % 16 < 10)
			hex3[i] = a % 16 + 48;
		else
			switch (a % 16)
			{
			case 10: hex3[i] = 97; break;
			case 11: hex3[i] = 98; break;
			case 12: hex3[i] = 99; break;
			case 13: hex3[i] = 100; break;
			case 14: hex3[i] = 101; break;
			case 15: hex3[i] = 102; break;
			}
		a = a / 16;
	}
	char temp = 0;
	temp = hex3[0];
	hex3[0] = hex3[1];
	hex3[1] = temp;

	if (strcmp(hex3, "ff") == 0)
	{
		sequence[2] = 0;
		sequence[3]++;
	}
}
void decimal_to_hex4_text(int a)
{

	int i = 0;
	for (i; i < 2; i++)
	{
		if (a % 16 < 10)
			hex4[i] = a % 16 + 48;
		else
			switch (a % 16)
			{
			case 10: hex4[i] = 97; break;
			case 11: hex4[i] = 98; break;
			case 12: hex4[i] = 99; break;
			case 13: hex4[i] = 100; break;
			case 14: hex4[i] = 101; break;
			case 15: hex4[i] = 102; break;
			}
		a = a / 16;
	}
	char temp = 0;
	temp = hex4[0];
	hex4[0] = hex4[1];
	hex4[1] = temp;
}

int main(int argc, char *argv[])
{
	int i = 1;

	for (i; i < argc + 1; i++)
	{
		int j;
		char temp1[3], temp2[3], temp3[3], temp4[3];
		decimal_to_hex1_text(sequence[0]);
		decimal_to_hex2_text(sequence[1]);
		decimal_to_hex3_text(sequence[2]);
		decimal_to_hex4_text(sequence[3]);
		strcpy_s(temp1, sizeof(char) * 3, hex1);
		strcpy_s(temp2, sizeof(char) * 3, hex2);
		strcpy_s(temp3, sizeof(char) * 3, hex3);
		strcpy_s(temp4, sizeof(char) * 3, hex4);
flag :
		j = i;
		for (j; strcmp(argv[j], temp1) != 0; j++)
		{

			
			printf("%s ", argv[j]);
			
		}
		
		i += j - i;
		int k = j + 1;
		if ((strcmp(argv[k], temp2) == 0 && strcmp(argv[k + 1], temp3) == 0 && strcmp(argv[k + 2], temp4) == 0) != 1)
			goto flag;

		sequence[0]++;
		printf("\n\n%s",argv[j]);

	}
}
