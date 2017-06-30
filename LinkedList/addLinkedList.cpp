#include<iostream>
#include<stdio.h>
#include "LinkedList.h"
using namespace std;
LinkedList added(LinkedList& L1, LinkedList& L2);
int main(int argc, char **argv)
{
	LinkedList L1;
	LinkedList L2;

	L1.add(1);
	L1.add(2);
	L1.add(3);
	L1.add(5);

	L2.add(5);
	L2.add(6);
	L2.add(7);
	L2.add(8);
	
	LinkedList L=added(L1,L2);
	
	L.printInt();
	

}
LinkedList L3;
LinkedList added(LinkedList& L1, LinkedList& L2)
{
	//LinkedList L3;
	
	Node h1=L1.head;
	Node h2=L2.head;
	int carry=0;
	while(h1!=NULL)
	{
		int sum=h1->data1 + h2->data1;
		int add=(sum%10) + carry;
		carry = sum/10;

		L3.add(add);
		h1=h1->next;
		h2=h2->next;

	}
	return L3;
}
