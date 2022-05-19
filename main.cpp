#include <iostream>
using namespace std;
//Binary search 
//Binary search 
// linked list implementation 
//pointer doing calculator code 
// stack implementation code 
// queue implementation code 
//ulab bus service 
//stack problem solving 2
//circular queue code 1

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
    cout<<"Ehteshamul Islam"<<endl;
  cout<<endl;
  cout<<endl;
    cout<<"           Here our Project Begins..."<<endl;
  ;
  cout<<endl;
  cout<<endl;
}
int main() {
   r();
  //existed code
  linearSearch();
  cout<<endl;
  BinarySearch();

  //pointer var used
  linearSearchPointer();


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
   return 0;
   
    return 0;
  return 0;
 
  
}