#include "header.h"

//khoi tao danh sach
link getNode(int k)
{
	link p = (link)malloc(sizeof(node));
	if (p == NULL)
		return NULL;

	p->key = k;
	p->next = NULL;
	return p;
}


//them phan tu vao dau danh sach
void addFirst(link &phead, link &ptail, int k)
{
	link p = getNode(k);
	if (phead == NULL)
		phead = ptail = NULL;
	else
	{
		p->next = phead;
		phead = p;
	}
}

//kiem tra xem co phai la dslk vong 
bool checkCircularLinkList(link phead, link ptail)
{
	if (phead == NULL)
		return false;
	link p;
	link temp = phead;
	for (p = phead->next;p != NULL;p = p->next)
	{
		if (temp == p)
			return true;
	}
	return false;
}