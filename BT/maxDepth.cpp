#include<iostream>
#include<stdio.h>
#include "BinaryTree.h"

using namespace std;
int depth(Node current);
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
	cout<<depth(B1.root);
}

int depth(Node current)
{
	if(current==NULL)
		return 0;

	return 1 + std::max(depth(current->leftChild),depth(current->rightChild));


}
