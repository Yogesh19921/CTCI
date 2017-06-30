#include<iostream>
#include<stdio.h>
#include "BinaryTree.h"
using namespace std;

void createTree(int arr[],BinaryTree& B1);
void newNode(int arr[],int low,int high,Node current);
int main(int argc, char **argv)
{
        BinaryTree B1(true);

	int arr[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};

	createTree(arr,B1);
//	cout<<B1.root->data;
	B1.inOrder(B1.root);


}

void makeTree(int arr[],BinaryTree& B1)
{
	int temp=0;
	int count=0;

	int mid=5;

	while(count<10)
	{
		B1.add(arr[mid]);
		

	}


}


int count=0;
void createTree(int arr[],BinaryTree& B1)
{
	int size=(sizeof(arr)/sizeof(arr[0]));

	B1.root=new node;
	B1.root->data=arr[(12)/2];
	B1.root->leftChild=NULL;
	B1.root->rightChild=NULL;
	count=1;
	newNode(arr,0,12,B1.root);


}

void newNode(int arr[],int low,int high,Node current)
{
	if(high-low<=3)
		return;
	int mid= ((high - low )/2) +low;

	int left=((mid-low)/2)+low;
	int right=((high -mid)/2) + mid;

	if(left<0 || right<0 ||mid<0)
		return;

	cout<<mid<<"  "<<left <<"  "<<right<<endl;
	//System.exit(0);
//	return;
	current->leftChild=new node;
	current->leftChild->data=arr[left];
	current->leftChild->leftChild=NULL;
	current->leftChild->rightChild=NULL;
//	cout<<"left";
	current->rightChild=new node;
	current->rightChild->data=arr[right];
	current->rightChild->leftChild=NULL;
	current->rightChild->rightChild=NULL;
//	cout<<"right";
	//count++;
	//count++;

	newNode(arr,low,mid,current->leftChild);
	newNode(arr,mid,high,current->rightChild);

}
