#ifndef _Circular_Link_List_
#define _Circular_Link_List_
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
bool checkCircularLinkList(link phead, link ptail);

#endif // !_Circular_Link_List
