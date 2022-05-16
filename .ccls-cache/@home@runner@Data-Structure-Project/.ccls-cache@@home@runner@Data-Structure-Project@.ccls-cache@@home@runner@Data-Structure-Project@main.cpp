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

int BinarySearch(int a[],int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start <= end)
    {
        if(a[mid]==key)
        {
            return mid;
        }
        if( a[mid]<key)
        {
            start = mid+1;
        }
        else
        {
            end = mid -1;

        }
        mid = start+(end-start)/2;

    }
    return -1;
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
int main() {
  
  linearSearch();
  cout<<endl;
  int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int even_index = BinarySearch(even,6,18);
    cout<<"Even index no: "<<even_index<<endl;
    int odd_index = BinarySearch(odd,5,16);
    cout<<"Odd index no: "<<odd_index<<endl;
 
    return 0;
  
}
/*
#include<iostream>
using namespace std;
void sortAs(int arr[],int n)
{
     for( int j=0;j<n;j++)
 {
 for(int i=0;i<n-j;i++)
 {
    if(arr[i]>arr[i+1])
    {
        swap(arr[i],arr[i+1]);
    }
 }
}
  for(int i=0;i<n;i++)
  {

      cout<<arr[i];
  }
}
void arraymid(int arr[],int n)
{
    int i=0;
     for( int j=0;j<n;j++)
 {
 for( i=0;i<n-j;i++)
 {
    if(arr[i]>arr[i+1])
    {
        swap(arr[i],arr[i+1]);
    }
 }
}
cout<<endl;
//int i=0;
  for(i=0;i<n/2;i++)
  {

      //cout<<arr[i];
  }
  cout<<arr[i];

}
void insertarray(int arr[], int n)
{
    
    for (int i = 0; i<n; i++) {   
        for (int j = i+1; j <n; j++) {   
           if(arr[i] < arr[j]) {  
               swap(arr[i],arr[j]);
           }   
        }   
    }  

  for(int i=0;i<n;i++)
  {

      cout<<arr[i];
  }
  int i=0;
   for(i=0;i<n/2;i++)
  {

      //cout<<arr[i];
  }
  cout<<endl;
  cin>>arr[i];
  for(int i=0;i<n;i++)
  {
      cout<<arr[i];
  }
  
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sortAs(a,n);
    cout<<endl;
    arraymid(a,n);
    cout<<endl;
    insertarray(a,n);
}
*/