#include <iostream>
using namespace std;
#define max 50
//linear search
//Binary search 
// linked list implementation 
//pointer doing calculator code 
// stack implementation code 
// queue implementation code 
//ulab bus service 
//stack problem solving 2
//circular queue code 1


class queue{
 int* arr ;
 int front ;
 int rear;

 public:
     queue(){
        arr=new int[max] ;
        front= -1 ;
        rear = -1 ;
     }
     void enqueue(int x){
     if(rear==max-1){
           cout<<"Queue is filled"<<endl;
           return ;
     }
     rear++;
     arr[rear] =  x ;

     if( front== -1){
        front++ ;
     }
     }

     void dequeue(){
     if(rear==-1 || front>rear ){
        cout<<" There is no element to remove"<<endl;
        return;
     }
     front++;
     }

     int peek(){
      if(rear==-1 || front>rear ){
        cout<<" There is no element to remove"<<endl;
        return-1;
     }
     return arr[front] ;
     }

     bool isempty(){
      if(rear==-1 || front>rear ){
        return true;
     }
     return false ; }
} ;


void BinarySearch()
{
  int n;
  cout<<"How many element:";
    cin>>n;
    int a[n];
  cout<<"Enter Elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   for( int j=0;j<n;j++)
 {
 for(int i=0;i<n-j;i++)
 {
    if(a[i]>a[i+1])
    {
        swap(a[i],a[i+1]);
    }
 }
}
  
  int first,last,num,middle;
    cout<<"Enter a number for searching:";
   cin>>num;
    first = 0;
    last = n-1;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(a[middle]<num)
            first = middle+1;
        else if(a[middle]==num)
        {
            cout<<"\nThe number, "<<num<<" found at Position "<<middle+1;
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        cout<<"\nThe number, "<<num<<" is not found in given Array";
    cout<<endl;
}
void linearSearch()
  {
    
    int input[100], count, i, num;
       
    cout << "Enter Number of Elements in Array:";
    cin >> count;
     
    cout << "Enter " << count << " numbers ";
      
    // Read array elements
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
      
    cout << "Enter a number to serach in Array:";
    cin >> num;
    for(i = 0; i < count; i++){
        if(input[i] == num){
            cout << "Element found at index " << i;
            break;
        }
    }
      
    if(i == count){
        cout  << "Element Not Present in Input Array\n";
    }
   
  }




void linearSearchPointer()
  {
    
   int  var = 20;   // actual variable declaration.
   int  *ip;        // pointer variable 

   ip = &var;       // store address of var in pointer variable

   cout << "Value of var variable: ";
   cout << var << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   // access the value at the address available in pointer
   cout << "Value of *ip variable: ";
   cout << *ip << endl;
   
  }


class Stack
{
   int top;
   public:
   int myStack[10]; //stack array
  
   Stack() { top = -1; }
   bool push(int x);
   int pop();
   bool isEmpty();
};
   //pushes element on to the stack
   bool Stack::push(int item)
   {
      if (top >= (10-1)) {
      cout << "Stack Overflow!!!";
      return false;
   }
else {
   myStack[++top] = item;
   cout<<item<<endl;
   return true;
   }
}
  
//removes or pops elements out of the stack
int Stack::pop()
{
   if (top < 0) {
      cout << "Stack Underflow!!";
      return 0;
   }
else {
       int item = myStack[top--];
      return item;
   }
}
  
//check if stack is empty
bool Stack::isEmpty()
{
   return (top < 0);
}




void r()
{
  cout<<"Hello Everyone!"<<endl;
   cout<<"Welcome to our project"<<endl;
    cout<<"We are a group of 4 people and our group members are :  "<<endl;
    cout<<"1.Mohammad Mahadi Hasan"<<endl;
    cout<<"2.Riad Rahman"<<endl;
    cout<<"3.Mahbuba Rahman"<<endl;
    cout<<"4.Ehteshamul Islam"<<endl;
  cout<<endl;
  cout<<endl;
    cout<<"           Here our Project Begins..."<<endl;
  ;
  cout<<endl;
  cout<<endl;
}
void arc()
{
  float radius, area;

   cout << "\nEnter the radius of Circle : ";
   cin>>radius;

   area = 3.14 * radius * radius;

   cout << "\nArea of Circle : " << area;
  cout<<endl;

}
// Iterative C++ program to reverse a linked list

/* Link list node */
struct Node {
	int data;
	struct Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct LinkedList {
	Node* head;
	LinkedList() { head = NULL; }

	/* Function to reverse the linked list */
	void reverse()
	{
		// Initialize current, previous and next pointers
		Node* current = head;
		Node *prev = NULL, *next = NULL;

		while (current != NULL) {
			// Store next
			next = current->next;
			// Reverse current node's pointer
			current->next = prev;
			// Move pointers one position ahead.
			prev = current;
			current = next;
		}
		head = prev;
	}

	/* Function to print linked list */
	void print()
	{
		struct Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data)
	{
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}
};


/* Driver code*/
void linklist()
{
	/* Start with the empty list */
	LinkedList ll;
	ll.push(20);
	ll.push(4);
	ll.push(15);
	ll.push(85);

	cout << "Given linked list\n";
	ll.print();

	ll.reverse();

	cout << "\nReversed Linked list \n";
	ll.print();
	
}
// C++ program to delete a given key from
// circular doubly linked list.


// Structure of a Node
struct Nodel {
	int data;
	struct Nodel* next;
	struct Nodel* prev;
};

// Function to insert node in the list
void insert(struct Nodel** start, int value)
{
	// If the list is empty, create a single node
	// circular and doubly list
	if (*start == NULL) {
		struct Nodel* new_node = new Nodel;
		new_node->data = value;
		new_node->next = new_node->prev = new_node;
		*start = new_node;
		return;
	}

	// If list is not empty

	/* Find last node */
	Nodel* last = (*start)->prev;

	// Create Node dynamically
	struct Nodel* new_node = new Nodel;
	new_node->data = value;

	// Start is going to be next of new_node
	new_node->next = *start;

	// Make new node previous of start
	(*start)->prev = new_node;

	// Make last previous of new node
	new_node->prev = last;

	// Make new node next of old last
	last->next = new_node;
}

// Function to delete a given node from the list
void deleteNode(struct Nodel** start, int key)
{
	// If list is empty
	if (*start == NULL)
		return;

	// Find the required node
	// Declare two pointers and initialize them
	struct Nodel *curr = *start, *prev_1 = NULL;
	while (curr->data != key) {
		// If node is not present in the list
		if (curr->next == *start) {
			printf("\nList doesn't have node with value = %d", key);
			return;
		}

		prev_1 = curr;
		curr = curr->next;
	}

	// Check if node is the only node in list
	if (curr->next == *start && prev_1 == NULL) {
		(*start) = NULL;
		free(curr);
		return;
	}

	// If list has more than one node,
	// check if it is the first node
	if (curr == *start) {
		// Move prev_1 to last node
		prev_1 = (*start)->prev;

		// Move start ahead
		*start = (*start)->next;

		// Adjust the pointers of prev_1 and start node
		prev_1->next = *start;
		(*start)->prev = prev_1;
		free(curr);
	}

	// check if it is the last node
	else if (curr->next == *start) {
		// Adjust the pointers of prev_1 and start node
		prev_1->next = *start;
		(*start)->prev = prev_1;
		free(curr);
	}
	else {
		// create new pointer, points to next of curr node
		struct Nodel* temp = curr->next;

		// Adjust the pointers of prev_1 and temp node
		prev_1->next = temp;
		temp->prev = prev_1;
		free(curr);
	}
}

// Function to display list elements
void display(struct Nodel* start)
{
	struct Nodel* temp = start;

	while (temp->next != start) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("%d ", temp->data);
}

// Driver program to test above functions
void lldel()
{
	// Start with the empty list
	struct Nodel* start = NULL;

	// Created linked list will be 4->5->6->7->8
	insert(&start, 4);
	insert(&start, 5);
	insert(&start, 6);
	insert(&start, 7);
	insert(&start, 8);

	printf("List Before Deletion: ");
	display(start);

	// Delete the node which is not present in list
	deleteNode(&start, 9);
	printf("\nList After Deletion: ");
	display(start);

	// Delete the first node
	deleteNode(&start, 4);
	printf("\nList After Deleting %d: ", 4);
	display(start);

	// Delete the last node
	deleteNode(&start, 8);
	printf("\nList After Deleting %d: ", 8);
	display(start);

	// Delete the middle node
	deleteNode(&start, 6);
	printf("\nList After Deleting %d: ", 6);
	display(start);

	
}


// c++ program to count number of nodes in
// a circular linked list.

/*structure for a node*/

void quiz()
{
  cout<<"Queue code Implementation"<<endl;
  queue q ;
     q.enqueue(5);
     q.enqueue(4);
     q.enqueue(3);
     q.enqueue(2);
     q.enqueue(1);

     cout<<q.peek()<<endl;
     q.dequeue() ;

     cout<<q.peek()<<endl;
     q.dequeue() ;

     cout<<q.peek()<<endl;
     q.dequeue() ;

     cout<<q.peek()<<endl;
     q.dequeue() ;

    cout<<q.peek()<<endl;
     q.dequeue() ;

     cout<<"if the queue is empty it will print 1 ,if not .then it will print 0"<<endl;
     cout<<q.isempty()<<endl;

  cout<<endl;
}
// Circular Queue implementation in C++


#define SIZE 5 /* Size of Circular Queue */



class Queue {
   private:
  int items[SIZE], front, rear;

   public:
  Queue() {
    front = -1;
    rear = -1;
  }
  // Check if the queue is full
  bool isFull() {
    if (front == 0 && rear == SIZE - 1) {
      return true;
    }
    if (front == rear + 1) {
      return true;
    }
    return false;
  }
  // Check if the queue is empty
  bool isEmpty() {
    if (front == -1)
      return true;
    else
      return false;
  }
  // Adding an element
  void enQueue(int element) {
    if (isFull()) {
      cout << "Queue is full";
    } else {
      if (front == -1) front = 0;
      rear = (rear + 1) % SIZE;
      items[rear] = element;
      cout << endl
         << "Inserted " << element << endl;
    }
  }
  // Removing an element
  int deQueue() {
    int element;
    if (isEmpty()) {
      cout << "Queue is empty" << endl;
      return (-1);
    } else {
      element = items[front];
      if (front == rear) {
        front = -1;
        rear = -1;
      }
      // Q has only one element,
      // so we reset the queue after deleting it.
      else {
        front = (front + 1) % SIZE;
      }
      return (element);
    }
  }

  void display() {
    // Function to display status of Circular Queue
    int i;
    if (isEmpty()) {
      cout << endl
         << "Empty Queue" << endl;
    } else {
      cout << "Front -> " << front;
      cout << endl
         << "Items -> ";
      for (i = front; i != rear; i = (i + 1) % SIZE)
        cout << items[i];
      cout << items[i];
      cout << endl
         << "Rear -> " << rear;
    }
  }
};

void crq()
{
  cout<<endl;
  Queue q;

  // Fails because front = -1
  q.deQueue();

  q.enQueue(1);
  q.enQueue(2);
  q.enQueue(3);
  q.enQueue(4);
  q.enQueue(5);

  // Fails to enqueue because front == 0 && rear == SIZE - 1
  q.enQueue(6);

  q.display();

  int elem = q.deQueue();

  if (elem != -1)
    cout << endl
       << "Deleted Element is " << elem;

  q.display();

  q.enQueue(7);

  q.display();

  // Fails to enqueue because front == rear + 1
  q.enQueue(8);

}
// Stack implementation in C++

#define MAX 10
int size = 0;

// Creating a stack
struct stack {
  int items[MAX];
  int top;
};
typedef struct stack st;

void createEmptyStack(st *s) {
  s->top = -1;
}

// Check if the stack is full
int isfull(st *s) {
  if (s->top == MAX - 1)
    return 1;
  else
    return 0;
}

// Check if the stack is empty
int isempty(st *s) {
  if (s->top == -1)
    return 1;
  else
    return 0;
}

// Add elements into stack
void push(st *s, int newitem) {
  if (isfull(s)) {
    cout << "STACK FULL";
  } else {
    s->top++;
    s->items[s->top] = newitem;
  }
  size++;
}

// Remove element from stack
void pop(st *s) {
  if (isempty(s)) {
    cout << "\n STACK EMPTY \n";
  } else {
    cout << "Item popped= " << s->items[s->top];
    s->top--;
  }
  size--;
  cout << endl;
}

// Print elements of stack
void printStack(st *s) {
  printf("Stack: ");
  for (int i = 0; i < size; i++) {
    cout << s->items[i] << " ";
  }
  cout << endl;
}

// Driver code
void stack2() {
  cout<<endl;
  cout<<"Stack 2"<<endl;
  int ch;
  st *s = (st *)malloc(sizeof(st));

  createEmptyStack(s);

  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);

  printStack(s);

  pop(s);

  cout << "\nAfter popping out\n";
  printStack(s);
}

int main() {
   r();
  //existed code
  linearSearch();
  cout<<endl;
  BinarySearch();

  //pointer var used
  linearSearchPointer();
  arc();
   linklist();
  cout<<endl;
  //area of circle using pointer


  //Stack
  class Stack stack;
   cout<<"The Stack Push "<<endl;
   stack.push(2);
   stack.push(4);
   stack.push(6);
   cout<<"The Stack Pop : "<<endl;
   while(!stack.isEmpty())
      {
      cout<<stack.pop()<<endl;
      }
  quiz();
  
cout<<"link list delatation";

 lldel();
  crq();
  stack2();
}