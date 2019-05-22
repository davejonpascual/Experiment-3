#include<iostream>
using namespace std;
int main ()
{
    int arr[10], max, min, size,i,j,sum=0,avg;
    cout << "Enter the size of the array : ";
    cin>>size;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < size; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < size; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    for (int i = 1; i <= size; ++i) {
        sum += i;
    }
    cout << "Largest Integer : " << max<<endl;
    cout << "Smallest Integer : " << min<<endl;
    cout<<"Sum of entered number is : "<<sum<<endl;
avg=sum/size;
cout<<"Average of entered number is : "<<avg;

    return 0;
}
