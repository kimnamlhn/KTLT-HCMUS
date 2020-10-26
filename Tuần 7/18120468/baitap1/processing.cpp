#include "header.h"
link phead = NULL, ptail = NULL;

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


//kiem tra rong
bool isEmpty(link phead)
{
	if (phead == NULL)
		return true;
	return false;
}

//in ra list
void printList(link phead)
{
	link p;
	if (phead == NULL)
		return;
	else
	{
		for (p = phead;p != NULL;p = p->next)
			cout << p->key << endl;
	}
}

//tim phan tu dau tien trong link list co gia tri x 
void findIntFirst(link phead, int x)
{
	link p = phead;
	link temp = NULL;
	if (phead == NULL)
		cout << "No value found" << endl;
	else
	{
		while (p != NULL)
		{
			if (p->key == x)
			{
				temp = p;
				break;
			}
			p = p->next;
		}
	}
	if (temp != NULL)
		cout << "The first value address found is : " << temp << endl;
	else
		cout << "No value found";
}


//tim phan tu cuoi cung trong link list co gia tri x 
void findIntLast(link phead, int x)
{
	link p = phead;
	link temp;
	temp = NULL;
	if (phead == NULL)
		cout << "No value found" << endl;
	else
	{
		while (p != NULL)
		{
			if (p->key == x)
			{
				temp = p;
			}
			p = p->next;
		}
	}
	if (temp != NULL)
		cout << "The first value address found is : " << temp << endl;
	else
		cout << "No value found";
}

//tim phan tu thu k
void findInt_k(link phead, int k)
{
	if (phead == NULL)
		return;
	link p;
	int temp = 0;
	for (p = phead;p != NULL;p = p->next)
	{
		if (temp == k)
			break;
		temp++;
	}
	cout << "The search element is: " << p->key << endl;
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

//them phan tu vao cuoi danh sach
void addLast(link &phead, link &ptail, int k)
{
	link p = getNode(k);
	if (phead == NULL)
		phead = ptail = p;
	else
	{
		ptail->next = p;
		ptail = p;
	}
}

//xoa phan tu dau tien cua dslk
void deleteBegin(link &phead, link &ptail)
{
	if (phead = ptail)
	{
		free(phead);
		phead = ptail = NULL;
	}
	else
	{
		link p = phead;
		phead = phead->next;
		free(p);
	}
}

//xoa phan tu cuoi cung cua dslk
void deleteEnd(link &phead, link &ptail)
{
	if (phead = ptail)
	{
		free(phead);
		phead = ptail = NULL;
	}
	else
	{
		for (link p = phead;p->next != ptail;p = p->next)
		{
			free(ptail);
			ptail = p;
			p->next = NULL;
		}
	}
}

//xoa phan tu o giua dslk
void deleteMid(link &phead, link &ptail, link q)
{
	link p;
	for (p = phead;p->next != q;p = p->next);
	p->next = q->next;
	free(q);
}


//chen vao mot day dang tang
void insertAfter(link &phead, link &ptail, int k)
{
	link p = getNode(k);
	link temp;
	for (temp = phead;temp != NULL;temp = temp->next)
	{
		if (temp->key < p->key)
		{
			p->next = temp->next;
			temp->next = p;
		}
	}
}

//xoa rong danh sach 
void destroyList(link &phead)
{
	if (phead == NULL)
		return;
	link p;
	while (phead != NULL)
	{
		p = phead;
		phead = phead->next;
		free(p);
	}
}

//xoa phan tu x dau tien trong danh sach
void deleteInt_x(link &phead, link &ptail, int x)
{
	if (phead == NULL)
		return;
	link temp = NULL, p;
	for (p = phead;p != NULL;p = p->next)
	{
		if (p->next->key == x)
		{
			temp =p->next;
			break;
		}
	}
	if (temp != NULL)
	{
		p->next = temp->next;
	}
}

