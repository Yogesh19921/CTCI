//#include "BinaryTree.h"
#include "queue.h"
#include<iostream>
#include<stdio.h>

using namespace std;

Queue::Queue()
{
	length=0;
	front=NULL;
}

void Queue::enqueue(Node data)
{
	if(front==NULL)
	{
		front=new unit;
		front->data=data;
		rear=front;
		front->next=NULL;
	}
	else
	{
		Unit temp=rear;
		rear=new unit;
		rear->data=data;
		temp->next=rear;
		rear->next=NULL;
	}
	length++;

}
int Queue::size()
{
	return length;
}
Node Queue::peep()
{
        return front->data;
}

Node Queue::dequeue()
{
	if(front==NULL)
	{
		length=0;
		return NULL;
	}
	Unit temp=front;
	length--;
	front =front->next;
	return temp->data;
}
