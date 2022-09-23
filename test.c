#include <stdio.h>
#include <stdlib.h>
struct Node{
	int val;
	struct Node* next;
};
typedef struct Node* NodePtr;
#include "linkedlist.h"
int main(){
	NodePtr head = NULL;
	head = Create(10);
	PrintList(head);
	head = PushFront(head,20);
	PrintList(head);
	head = PushBack(head,30);
	PrintList(head);
	head = Delete(head,70);
	PrintList(head);
	head = Delete(head,10);
	PrintList(head);
	head = Reverse(head);
	PrintList(head);
	Clear(head);
	return 0;
}
