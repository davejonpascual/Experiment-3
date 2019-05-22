#include<iostream>
using namespace std;

 int main()
  {
   int a[20],b[20],i,j,size;
   cout<<"How many elements you want to enter: ";
   cin>>n;
   cout<<"Enter any "<<n<<" elements in Array: ";
   for(i=0; i<n ;i++)
   {
   cin>>a[i];
   }
   cout<<"Reverse of Array: ";

   for(i=n-1,j=0; i>=0;i--,j++)
   {
    b[i]=a[j];
   }
   for(i=0; i<size ;i++)
   {
   cout<<b[i];
   }
  return 0;
  }
