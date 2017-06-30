
typedef struct node
{
        struct node *next;
        char data;
        int data1;
	int min;
}* Node;

class Stack
{
	public:
		Node top;
		int min;
		Stack();
		Node pop();
		void push(int value);
		int getMin();
};
