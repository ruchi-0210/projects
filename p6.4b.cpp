#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    int a[10],b[10],c[20];
    int n,m,swap;
    
    cout<<"enter the size of the first array:";
    cin>>n;
    cout<<"enter the first array : ";
    for(int i=0;i<n; i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[i]>a[i+1])
            {
            swap=a[i];
            a[i]=a[i+1];
            a[i+1]=a[i];
            }
        }
    }
    cout<<"enter the size of the second array:";
    cin>>m;
    cout<<"enter the second array : ";
    for(int i=0;i<m; i++)
    {
        cin>>b[i];
    }
    for (int i=0;i<m-1;i++)
    {
        for(int j=0;j<m-i-1;j++)
        {
            if(b[i]>b[i+1])
            {
            swap=b[i];
            b[i]=b[i+1];
            b[i+1]=b[i];
            }
        }
    }
    cout<<"sorted first array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];

    }
    cout<<"sorted second array is: ";
    for(int i=0;i<m;i++)
    {
        cout<<b[i];

    }
    for(int i=0;i<m+n;i++)
    {
        if(i<n)
        {
        c[i]=a[i];
        }
        else
        {
            c[i]=b[i-n];
        }
    }
    cout<<"merged array: ";
    for(int i=0 ; i<n+m;i++)
    {
        cout<<c[i];      
    }


    return 0;
}