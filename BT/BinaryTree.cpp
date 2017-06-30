#include "BinaryTree.h"
#include<stdio.h>
#include<iostream>
using namespace std;

BinaryTree::BinaryTree(bool searchTree)
{
	//cout<<"here";
	root=NULL;
	sT=searchTree;
	//cout<<"done";
}

void BinaryTree::add(int data)
{
	if(root==NULL)
	{
		root=new node;
		root->data=data;
		root->height=1;
		root->parent=NULL;
		root->leftChild=NULL;
		root->rightChild=NULL;
		return;
	}
	if(sT)
	{
		insert(root,data);

	}


}

void BinaryTree::insert(Node current,int data)
{
	if(current->data >data)
	{
		if(current->leftChild==NULL)
		{
			current->leftChild=new node;
			current->leftChild->data=data;
			current->leftChild->leftChild=NULL;
			current->leftChild->rightChild=NULL;
			current->leftChild->parent=current;
			current->leftChild->height=1;
			if(current->height==1)
				current->height=2;
		}
		else
		{
			current->height=current->height+1;
			insert(current->leftChild,data);
		}

	}
	else
	{
		if(current->rightChild==NULL)
		{
			current->rightChild=new node;
                        current->rightChild->data=data;
			current->rightChild->leftChild=NULL;
                        current->rightChild->rightChild=NULL;
			current->rightChild->parent=current;
			current->rightChild->height=1;
                        if(current->height==1)
                                current->height=2;

		}
		else
		{
			current->height=current->height+1;
			insert(current->rightChild,data);
		}
	}
}

void BinaryTree::inOrder(Node current)
{
	if(current==NULL)
		return;//cout<<current->data<<"\t";
	inOrder(current->leftChild);
	//inOrder(current);
	cout<<current->data;
	inOrder(current->rightChild);

}
