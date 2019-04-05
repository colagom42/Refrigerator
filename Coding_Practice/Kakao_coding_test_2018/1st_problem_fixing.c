#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Enter(char *record2, char *record3);
void Leave(char *record2, char *record3);
void Change(char *record2, char *record3);
char Output_arr[100][2][11] = { 0, };
char uid_nick_match[100][2][11] = { 0, };
int num_of_uid = 0;
int num_of_output = 0;

int main(int argc,char* argv[])
{	

	for (int i = 1; i < argc; i++)
	{	
		char temp[100] = { 0 };
		strcpy(temp, argv[i]);
		char *ptr = strtok(temp, ",");
		int loop_number = 0;
		while (ptr != NULL)
		{
			char record[100] = { 0 };
			char record2[11] = { 0 };
			char record3[11] = { 0 };
			


			strcpy(record, ptr);

			char *ptr_2 = strtok(record, " ");
			ptr_2 = strtok(NULL, " ");
			strcpy(record2, ptr_2);
			ptr_2 = strtok(NULL, " ");
			strcpy(record3, ptr_2);
			if (strcmp(record, "Enter") == 0)
			{
				Enter(record2, record3);
			}
			else if (strcmp(record, "Leave") == 0)
				Leave(record2, record3);
			else
				Change(record2, record3);
			loop_number++;
			ptr = strtok(temp, ",");
			for (int j = 0; j < loop_number; j++)
			{
				ptr = strtok(NULL, ",");
			}

		}
	
	}
	for (int i = 0; Output_arr[i][1][0] != 0; i++)
	{
		if (strcmp(uid_nick_match[i][0], Output_arr[i][0]) == 0) //���� �߻� ����
		{
			strcpy(Output_arr[i][0], uid_nick_match[i][1]);

		}
	}
	char *answer = malloc(sizeof(char) * 28 * num_of_output);
	for (int i = 0; i < num_of_output * 28; i++)
	{
		answer[i] = 0;
	}
	for (int i = 0; Output_arr[i][1][0] != 0; i++)
	{
		if (i == 0)
			strcat(answer, "\"");
		else
			strcat(answer, ", \"");
		strcat(answer, Output_arr[i][0]);
		if (Output_arr[i][1][0] == 1)
			strcat(answer, "���� ���Խ��ϴ�.\"");
		else
			strcat(answer, "���� �������ϴ�.\"");
	}

	printf("%s", answer);

	return 0;
}
void Enter(char *record2, char *record3)
{
	int checker = 0;

	strcpy(Output_arr[num_of_output][0], record2);
	Output_arr[num_of_output][1][0] = 1;
	num_of_output++;
	for (int i = 0; num_of_uid > i; i++)
	{
		if (strcmp(uid_nick_match[i][0], record2) == 0)
		{
			printf("Chesk");
			uid_nick_match[i][1][0] = '\0';
			strcpy(uid_nick_match[i][1], record3);
			checker++;
			
		}
	}
	if (checker == 0) {
		strcpy(uid_nick_match[num_of_uid][0], record2);
		strcpy(uid_nick_match[num_of_uid][1], record3);
		num_of_uid++;
	}
}
void Leave(char *record2, char *record3)
{
	strcpy(Output_arr[num_of_output][0], record2);
	Output_arr[num_of_output][1][0] = 2;
	num_of_output++;
}
void Change(char *record2, char *record3)
{

	for (int i = 0;  num_of_uid > i; i++)
	{
		if (strcmp(uid_nick_match[i][0], record2) == 0)
		{
			strcpy(uid_nick_match[i][1], record3);
		}
	}
}