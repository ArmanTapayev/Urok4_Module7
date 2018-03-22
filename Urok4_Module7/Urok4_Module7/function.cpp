#include<iostream>
#include<stdio.h>
#include<locale.h>
#include "Header.h"

void copyString(char *str1, char *str2)
{
	for (int i = 0; *(str1 + i) != '\0'; i++)
	{
		*(str2 + i) = *(str1 + i);
	}
}

void reversString(char *str1, char *str2)
{
	int n = strlen(str1);

		for (int i = 0;i < n; i++)
		{
			*(str2 + n - i - 1) = *(str1 + i);
		}
}