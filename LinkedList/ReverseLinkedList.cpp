#include<iostream>
#include<stdio.h>
#include "LinkedList.h"
using namespace std;

void reverse(LinkedList& L);
int main(int argc,char **argv)
{
	LinkedList L1;
	L1.add('a');
	L1.add('b');
	L1.add('c');
	L1.add('d');

	cout<<"before reversing"<<endl;
	L1.print();

	reverse(L1);

	cout<<" after reversing"<<endl;

	L1.print();


}
Node head2;
void reverse(LinkedList& L)
{
	Node h1=L.head;
	Node temp=h1;
	head2=NULL;
	while(h1->next!=NULL)
	{
		Node t=h1;
		h1=h1->next;
		t->next=head2;
		head2=t;
	}
	h1->next=head2;
	head2=h1;
	L.head=head2;
//	L.print();

}
