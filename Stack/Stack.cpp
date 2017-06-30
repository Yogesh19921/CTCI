#include "Stack.h"
#include<stdio.h>

Stack::Stack()
{
	top=NULL;
	min=0;
}

Node Stack::pop()
{
	Node temp=top;
        top=top->next;
        return temp;
}

void Stack::push(int value)
{
	if(top==NULL)
	{
		top=new node;
		top->data1=value;
		top->min=value;
	}
	else
	{
		Node newNode=new node;
		newNode->data1=value;
		newNode->next=top;
		top=newNode;
		if(top->next->min < value)
		{
			top->min=top->next->min;
		}
		else
			top->min=value;
	}
}

int Stack::getMin()
{
	return top->min;
}
