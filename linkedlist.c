#include <stdio.h>
#include <stdlib.h>
struct Node{
	int val;
	struct Node* next;
};
typedef struct Node* NodePtr;
//create new linked list head node
NodePtr Create(int value){
	NodePtr head = NULL;
	head = (NodePtr)malloc(sizeof(struct Node));
	head->val = value;
	head->next = NULL;
	return head;
}
//print the linked list
void PrintList(NodePtr head){
	NodePtr current;
	current = head;
	while(current->next != NULL){
		printf("%d->",current->val);
		current = current->next;
	}
	printf("%d",current->val);
	printf("\n");
	return ;
}
//insert a new node in front of linked list 
NodePtr PushFront(NodePtr head,int insertval){
	NodePtr newnode = NULL;
	newnode = (NodePtr)malloc(sizeof(struct Node));
	newnode->next = head;
	newnode->val = insertval;
	return newnode;
}
//insert a new node in back of linkde list
NodePtr PushBack(NodePtr head,int insertval){
	NodePtr newnode = NULL;
	newnode = (NodePtr)malloc(sizeof(struct Node));
	newnode->val = insertval;
	newnode->next = NULL;
	NodePtr current = head;
	while(current->next != NULL){
		current = current->next;
	}
	current->next = newnode;	
	return head;
}
//delete the "deleteval" value in linked list
NodePtr Delete(NodePtr head,int deleteval){
	NodePtr previous = NULL;
	NodePtr current = NULL;
	current = head;
	while(current != NULL){
		if(current->val == deleteval){
			if(previous == NULL){
				head = current->next;
				free(current);
			}
			else{
				previous->next = current->next;
				free(current);
			}
		}
		previous = current;
		current = current->next;
	}
	return head;
}
//clear the linked list
void Clear(NodePtr head){
	NodePtr temp = NULL;
	while(head->next != NULL){
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}

NodePtr Reverse(NodePtr head){
	NodePtr current = NULL;
	NodePtr previous = NULL;
	NodePtr temp = NULL;
	current = head;
	while(current->next != NULL){
		temp = current->next;
		current->next = previous;
		previous = current;
		current = temp; 
	}
	temp = current->next;
	current->next = previous;
	previous = current;	
	return previous;

}




