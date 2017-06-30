#include<iostream>
#include<stdio.h>
#include "LinkedList.h"
using namespace std;
void makeloop(LinkedList& L1);
void findLoop(LinkedList& L1);
int main(int argc, char **argv)
{
	LinkedList L1;

	L1.add('a');
	L1.add('b');
	L1.add('c');
	L1.add('d');//loop starts here.
	L1.add('e');
	L1.add('f');
	L1.add('g');

	makeloop(L1);
	findLoop(L1);

}

void makeloop(LinkedList& L1)
{
	Node h1=L1.head;
	Node looped=NULL;
	while(h1->next !=NULL)
	{
		if(h1->data=='e')
			looped=h1;
		h1=h1->next;
	}
	h1->next=looped;
}

void findLoop(LinkedList& L1)
{
	Node h1=L1.head->next;
	Node h2=L1.head->next->next;

	while(h1!=h2)
	{
		h1=h1->next;
		h2=h2->next->next;
	}

	Node start=L1.head;

	while(start!=h1)
	{
		start=start->next;
		h1=h1->next;
	}

	cout<< h1->data;
}
