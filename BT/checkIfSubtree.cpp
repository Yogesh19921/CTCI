#include<iostream>
#include<stdio.h>
#include "BinaryTree.h"

using namespace std;
bool checkNode(Node current1, Node current2);
Node returnSameNode(Node tree1, Node LargerTree);
bool checksubtree(BinaryTree &B1, BinaryTree &B2);
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

	BinaryTree B2(true);
	B2.add(3);
	B2.add(4);
	B2.add(2);

	cout<<checksubtree(B1, B2);
}

bool checkNode(Node current1, Node current2)
{
	if(current1 == NULL && current2==NULL)
		return true;

	if(current1->data==current2->data)
	{
		bool is = checkNode(current1->leftChild,current2->leftChild);
		if(is)
			return checkNode(current1->rightChild,current2->rightChild);
		else
			return false;

	}
	else
		return false;
}


Node returnSameNode(Node tree1, Node LargerTree)
{
	//cout<<tree1->data;
	if(LargerTree==NULL)
		return NULL;

	if(LargerTree->data==tree1->data)
		return LargerTree;

	Node temp=returnSameNode(tree1,LargerTree->leftChild);
	//cout<<temp->data;
	if(temp==NULL)
		return returnSameNode(tree1,LargerTree->rightChild);
	else
		return temp;

}

bool checksubtree(BinaryTree &B1, BinaryTree &B2)
{
	Node LargerTree=returnSameNode(B2.root,B1.root);
	//cout<<LargerTree->data;
	if(LargerTree!=NULL)
		return checkNode(B2.root,LargerTree);
	else
		return false;


}

