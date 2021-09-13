#include<iostream.h>
#include<conio.h>
int main()
{
int arr[10],i;
cout<<"enter 10 array elements: ";
for(i=0;i<10;i++)
cin>>arr[i];
cout<<"\n the original array is :";
for(i=0;i<10;i++)
cout<<arr[i]<<" ";
cout<<"the reverse of array is:";
for(i=9;i>=0;i--)
cout<<arr[i]<<" ";
cout<<endl;
return 0;
}
