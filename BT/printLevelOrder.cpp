#include<iostream>
#include<stdio.h>
//#include "BinaryTree.h"
#include "queue.h"
using namespace std;
void printLevel(Node current,int level);
/*
                5
               /  \
             3     7
            / \   /  \
          2   4  6    8
         /
        1
       /
      0

*/

int main(int argc, char **argv)
{
        BinaryTree B1(true);//making a binary search tree
        B1.add(5);
        B1.add(7);
        B1.add(3);
        B1.add(6);
        B1.add(8);
        B1.add(4);
        B1.add(2);
        B1.add(1);
        B1.add(0);
//	cout<<"here";
	printLevel(B1.root,0);

}

void printLevel(Node current,int level)
{
	Queue Q;
	level=0;
	current->height=0;
	Q.enqueue(current);
	//cout<<"here";
	//cout<<Q.peep()->height;

	while(Q.size()>0)
	{
		while(level == Q.peep()->height)
		{
			Node temp=Q.dequeue();
			//peep=Q.peep();
			if(temp!=NULL)
			{
				//cout<<"level "<<Q.size();
				cout<<temp->data<<"-->"<<flush;
				if(temp->leftChild!=NULL)
				{
					temp->leftChild->height = level +1;
					Q.enqueue(temp->leftChild);
				}
        			if(temp->rightChild!=NULL)
				{
		        		temp->rightChild->height= level +1;
					Q.enqueue(temp->rightChild);
				}
				//cout<<flush;
				if(Q.size()<=0)
					break;
			}
			else
				break;
		}
		cout<<endl;
		level++;
	}
}

