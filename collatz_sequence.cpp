//Collatz Sequence
#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num!=1)
    {
            cout<<num<<" ";
            if(num%2==0)
            {
                num=num/2;
                count=count+1;
            }
            else
            {
                num=3*num+1;
                count=count+1; 
            }
    }
    cout<<num<<" ";
    cout<<"\nIt took "<<count<<" steps";
    return 0;
}