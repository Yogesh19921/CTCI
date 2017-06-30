#include<iostream>
#include<stdio.h>
#include "LinkedList.h"
using namespace std;
void nthtolast(LinkedList& L, int n);
int main(int argc, char **argv)
{
	LinkedList L1;
	L1.add('a');
	L1.add('b');
	L1.add('c');
	L1.add('d');
	L1.add('e');

	nthtolast(L1,2);
	
}

void nthtolast(LinkedList& L, int n)
{
	Node h1=L.head;
	Node h2=L.head;

	int count=0;
	while(count<n)
	{
		h1=h1->next;
		count++;
	}

	while(h1!=NULL)
	{
		h1=h1->next;
		h2=h2->next;
	}
	
	cout<< h2->data;
}
