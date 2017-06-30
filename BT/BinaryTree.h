#include<stdio.h>

typedef struct node
{
        struct node *leftChild;
	struct node *rightChild;
	struct node *parent;
        int data;
	int height;
}* Node;

class BinaryTree
{
	private:
		void insert(Node current,int data);
	public:
		bool sT;
		Node root;
		BinaryTree(bool searchTree);
		void add(int data);
		//int remove(int data);
		void inOrder(Node current);
		//void preOrder(Node current);
		//void postOrder(Node current);

};
