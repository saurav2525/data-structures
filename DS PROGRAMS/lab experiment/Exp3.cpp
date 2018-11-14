#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,j,ele,flag=0,temp;
int mid,min,max;
cout<<"Enter the size of array: ";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Array is:\n";
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
cout<<"\nAfter sorting the array: \n";
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";

