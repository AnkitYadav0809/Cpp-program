#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,2,3,4,0,0,1,1,4};
    int numzero=0;
    int numone=0;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            numzero++;
        }
        else if(arr[i]==1)
        {
            numone++;
        }
    }
    cout<<"The zeroes are:"<< numzero<<endl;
    cout<<"The ones are:"<< numone<<endl;
}