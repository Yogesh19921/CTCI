#include<iostream>
#include<stdio.h>
#include "BinaryTree.h"

using namespace std;
/*
                5
               /  \
             3     7
            / \   /  \
          2   4  6    8

*/



bool parent(Node current,int data);

int main(int argc, char **argv)
{
        BinaryTree B1(true);
        B1.add(5);
        B1.add(7);
        B1.add(3);
        B1.add(6);
        B1.add(8);
        B1.add(4);
        B1.add(2);
/*
        B1.inOrder(B1.root);

        cout<<checkBalance(B1.root);
*/
	cout<<parent(B1.root,4);
}

bool parent(Node current,int data)
{
        if(current==NULL)
                return 0;
        if(current->data==data)
                return 1;
        else
        {
                if(parent(current->leftChild,data))
		{
                        cout<<current->data;
			return 1;
		}
		if(parent(current->rightChild,data))
		{
			cout<<current->data;
			return 1;
		}
        }
        return 0;
}

