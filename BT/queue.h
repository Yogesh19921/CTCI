#include<stdio.h>
#include "BinaryTree.h"

typedef struct unit
{
	struct unit* next;
	Node data;
	int level;

}* Unit;


class Queue
{
	private:
		Unit front;
		int length;
		Unit rear;
	public:
		Queue();
		void enqueue(Node data);
		Node dequeue();
		Node peep();
		int size();
		void printq();
};
