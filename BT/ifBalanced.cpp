#include<iostream>
#include<stdio.h>
#include "BinaryTree.h"
using namespace std;
bool checkBalance(Node current);
//void nthtolast(LinkedList& L, int n);
int main(int argc, char **argv)
{
	BinaryTree B1(true);
	B1.add(5);
	B1.add(7);
//	B1.add(3);
	B1.add(6);
	B1.add(8);
/*	B1.add(4);
	B1.add(2);

	B1.inOrder(B1.root);
*/
	cout<<checkBalance(B1.root);

}

bool checkBalance(Node current)
{
	/*if(current==NULL)
		return false;
	*/
	
	int temp1=0;
	if(current->leftChild !=NULL)
		temp1=current->leftChild->height;
	int temp2=0;
	if(current->rightChild!=NULL)
		temp2=current->rightChild->height;
//	cout<<temp2<<endl;

	int diff= temp1 - temp2;
	if(diff>1 || diff<-1)
		return false;
	if(current->leftChild!=NULL)
		checkBalance(current->leftChild);
	if(current->rightChild!=NULL)
		checkBalance(current->rightChild);

	return true;
}
