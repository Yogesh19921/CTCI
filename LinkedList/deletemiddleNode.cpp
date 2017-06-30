#include<iostream>
#include<stdio.h>
#include "LinkedList.h"
using namespace std;
void deleteLast(Node& m);
int main(int argc, char **argv)
{
	LinkedList L1;

	L1.add('a');
	L1.add('b');
	L1.add('c');
	L1.add('d');
	L1.add('e');

	Node d=L1.head->next->next;
	deleteLast(d);
	L1.print();

}

void deleteLast(Node& m)
{
	Node temp=m->next;
	m->data=m->next->data;
	m->next=m->next->next;
	temp->next=NULL;
	free(temp);

}
