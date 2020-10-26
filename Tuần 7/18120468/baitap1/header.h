#ifndef _Link_List_
#define _Link_List_
#include <iostream>	
using namespace std;

typedef struct node* link;
struct node
{
	int key;
	link next;
};

link getNode(int k);
void addFirst(link &phead, link &ptail, int k);
bool isEmpty(link phead);
void printList(link phead);
void findIntFirst(link phead, int x);
void findIntLast(link phead, int x);
void findInt_k(link phead, int k);
void addLast(link &phead, link &ptail, int k);
void deleteBegin(link &phead, link &ptail);
void deleteEnd(link &phead, link &ptail);
void deleteMid(link &phead, link &ptail, link q);
void deleteInt_x(link &phead, link &ptail, int x);
void insertAfter(link &phead, link &ptail, int k);
void destroyList(link &phead);


#endif // !_Link_List_
