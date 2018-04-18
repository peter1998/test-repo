#pragma once
#define MaxName 30
typedef struct student
{
	char name[MaxName];
	int fn;
	float mark;
}Student;

typedef struct item
{
	Student s;
	struct item*next;
}Node;

Node *addToHead(Node *head, Node *newE);
Node *addToTail(Node *head, Node *newE);
Node *newElement();
void printList(Node *head);
Node *addToSortedListByFN(Node *head,Node *newE);
Node *addToSortedListByName(Node *head, Node *newE);