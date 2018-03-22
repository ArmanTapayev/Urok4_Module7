#include<iostream>
#include<stdio.h>
#include<locale.h>
#include "Header.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	int n;
		do
		{
			printf("Работа содержит 2 задания.\n");
			printf("Для выхода наберите 0.\n");
			printf("Введите номер задания: ");
			scanf("%d", &n);
			printf("\n");

			switch (n)
			{
				case 1:
				{
				/* Первый вариант. Нужно написать программу копирования строк без использования strcpy, 
				strlen и прочих им подобным. Входные данные - только указатель на строку, оканчивающуюся нулем, 
				и указатель на destination область.*/
			
					char s1[30] = "Здравствуй, чудный мир!", s2[30] = {};

					printf("Считаная строка:\n%s\n", s1);

					copyString(s1, s2);

					printf("\nСкопированная строка:\n%s\n", s2);

					printf("\n");
					system("pause");
					system("cls");

				}break;

				case 2:
				{
				/* Второй вариант: "развернуть" строку при копировании. То есть, если у нас есть "abcdef", 
				то после выполнения программы мы должны получить "fedcba". В качестве входных данных - указатель на строку 
				и можно воспользоваться strlen.*/
					char s1[30] = "Здравствуй, чудный мир!", s2[30] = {};

					printf("Считаная строка:\n%s\n", s1);

					reversString(s1, s2);

					printf("\nРазвернутая строка:\n%s\n", s2);

					printf("\n");
					system("pause");
					system("cls");

				}
				break;
			}
		} while (n != 0);
}

