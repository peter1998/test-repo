#pragma warning(disable :4996)
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "fileFunctions.h"

//************************
Node *addToHead(Node *head, Node *newE)
{
	if (head ==NULL)
	{
		newE->next = NULL;
		head = newE;
	}
	else
	{
		newE->next = head;
		head = newE;
	}
	return head;
}
//*********************************
Node *addToTail(Node *head, Node *newE)
{
	if (head==NULL)
	{
		newE->next = NULL;
		head = newE;

	}
	else
	{
		Node *crnt = head;
		while (crnt->next!=NULL)
		{
			crnt = crnt->next;
			newE->next = NULL;
			crnt->next = newE;
		}
	}
	return head;
}
//**********************************
Node *newElement()
{
	Node *newE;
	char buf[30];
	int k;
	newE = (Node*)malloc(sizeof(Node));

	if (newE==NULL)
	{
		printf("\n������ ��� �������� �� ����!!!");

		return NULL;
	}

	fflush(stdin);
	//while (getchar()!='\n');
	printf("\n�������� ��� �� ��������: ");
	{

	}
	if (fgets(buf, 28, stdin) == NULL)
	{
		printf("\n������ ��� ��������� �� ���!!!");

		return NULL;
	}
	buf[strlen(buf - 1)] = '\0';
	strcpy(newE->s.name, buf);

	do
	{
		printf("\n�������� ���������� ����� �� ��������: ");
		k = scanf("%d", &newE->s.fn);
	} while (k != 1);

	do
	{
		printf("\n�������� ����� �� ��������: ");
		k = scanf("%f", &newE->s.mark);
	} while (k != 1);

	return newE;
}
///*********************************
void printList(Node *head)
{
	while (head!=NULL)
	{
		printf("\n��� - %s", head->s.name);
		printf("\n�� - %d", head->s.fn);
		printf("\n����� - %.2f", head->s.mark);
		head = head->next;
	}
}
//*************************
Node *addToSortedListByFN(Node *head, Node *newE)
{
	if (head==NULL || newE->s.fn<head->s.fn)
	{
		newE->next = head;
		head = newE;
	}
	else
	{
		Node*crnt = head;
		while (crnt->next!=NULL && newE->s.fn>crnt->next->s.fn)
			crnt = crnt->next;
		
		newE->next = crnt->next;
		crnt->next = newE;

	}
	return head;
}
//************************************************
Node *addToSortedListByName(Node *head, Node *newE)
{
	return head;
}