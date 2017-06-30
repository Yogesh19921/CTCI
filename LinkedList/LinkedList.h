// A2DD.h
//#ifndef LinkedList
//#define LinkedList
typedef struct node
{
	struct node *next;
	char data;
	int data1;
}* Node;

class LinkedList
{
	public:
		Node head;
		LinkedList();
		void add(int data);
		void add(char data);
		void print();
		void printInt();
//		void delete(int data);
//		void delete(char data);*/
};
