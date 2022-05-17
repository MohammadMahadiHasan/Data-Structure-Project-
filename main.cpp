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
  linearSearch();
  cout<<endl;
  BinarySearch();
   
    return 0;
  return 0;
 
  
}
