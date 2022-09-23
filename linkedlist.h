#ifndef LINKEDLIST_H
#define LINKEDLIST_H
void PrintList(NodePtr head);
NodePtr Create(int value);
NodePtr PushFront(NodePtr head,int insertval);
NodePtr PushBack(NodePtr head,int insertval);
NodePtr Delete(NodePtr head,int deleteval);
void Clear(NodePtr head);
NodePtr Reverse(NodePtr head);
#endif 
