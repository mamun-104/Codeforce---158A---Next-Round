#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int val,i;
    //for taking inputs
    for(i=0;i<n;i++)
    {
        cin>>val;
        a[i]=val;
    }
    int temp,total=0;
    temp = k;

    //for comparing
     for(i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0){total++;}
    }
    cout<<total<<endl;


    return 0;
}
