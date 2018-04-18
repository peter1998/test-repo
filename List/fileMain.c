//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
#include "fileFunctions.h"
int main()
{
	Node *head = NULL,*newE=NULL;
	int a;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	printf("%d", sizeof(Node));
	printf("\n%d", sizeof(Student));
	getchar();
	do
	{
		printf("\n1.Добавяне на нов елемент към началото на списъка ");
		printf("\n2.Добавяне на нов елемент към края на списъка");
		printf("\n3.Добавяне на нов елемент към сортиран списък по ФН");
		printf("\n4.Добавяне на нов елемент към сортиран списък по име");
		printf("\n5.Съдържание на списъка");
		printf("\n6.Изход");
		printf("\nВашият избор :");
		while (1)
		{
			scanf("%d", &a);
			if (a<1 || a>6)
				printf("Грешен избор!Вашият избор :");
			else
				break;
		}
		
		switch (a)
		{
			case 1:newE=newElement();head=addToHead( head, newE);break;
			case 2:newE = newElement(); head = addToTail(head, newE); break;
			
			case 3: newE = newElement(); 
					head = addToSortedListByFN(head, newE);
					break;
			case 4:	newE = newElement();
					head = addToSortedListByName(head, newE);
					break;
			case 5:printList(head); break;
			default:printf("\nВашият избор!");
		}
	}while (a != 6);

	return 0;
}