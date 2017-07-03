
#include<iostream>
#include<stdio.h>
#include "BinaryTree.h"

using namespace std;
void printPath(Node current,int arr[],int &lastindex);
void printArr(int arr[],int index);
/*
		5
	       /  \
	     3     7
	    / \   /  \
	  2   4  6    8
         /
	1

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
	int arr[1000];
	int r=0;
	printPath(B1.root,arr,r);
	//Queue Q;
        //cout<<checksubtree(B1, B2);
}

//Queue Q;

void printPath(Node current,int arr[],int &lastindex)
{
	if(current==NULL)
		return;
	if(current->leftChild==NULL && current->rightChild==NULL)
	{
		arr[lastindex]=current->data;
		printArr(arr,lastindex);
		cout<<endl;
		return;
	}
	arr[lastindex]=current->data;
	lastindex++;
	printPath(current->leftChild,arr,lastindex);
	printPath(current->rightChild,arr,lastindex);
	lastindex--;

}

void printArr(int arr[],int index)
{
	for(int i=0;i<=index;i++)
	{
		cout<<arr[i];
	}

}
