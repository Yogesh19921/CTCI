#include "LinkedList.h"
#include<stdio.h>
#include<iostream>
using namespace std;

LinkedList::LinkedList()
{
	head=NULL;
}
void LinkedList:: add(char data)
{
	Node temp=head;
	if(head==NULL)
	{
		head=new node;
		head->data=data;
		head->next=NULL;
		return;
	}
//	cout<<"here i am";
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
//	cout<<"\n now here";

	temp->next=new node;
	temp->next->data=data;
	temp->next->next=NULL;
}

void LinkedList:: add(int data)
{
        Node temp=head;
        if(head==NULL)
        {
                head=new node;
                head->data1=data;
                head->next=NULL;
                return;
        }
//      cout<<"here i am";
        while(temp->next!=NULL)
        {
                temp=temp->next;
        }
//      cout<<"\n now here";

        temp->next=new node;
        temp->next->data1=data;
        temp->next->next=NULL;
}


void LinkedList::print()
{
	Node temp=head;
	while(temp!=NULL)
	{
		cout<< temp->data<< "-->";
		temp=temp->next;
	}

}

void LinkedList::printInt()
{
        Node temp=head;
        while(temp!=NULL)
        {
                cout<< temp->data1<< "-->";
                temp=temp->next;
        }

}


