//generating armstrong numbers
#include<iostream>
using namespace std;
int main()
{
    int num,temp,x,sum1,a[50],i;
    cout<<"Enter the range: ";
    cin>>num;
    for(i=0;i<num+1;i++)
    {
        sum1=0;
        temp=i;
        while(temp>0)
        {
            x=temp%10;
            sum1=sum1+x*x*x;
            temp=temp/10;
        }
        if(sum1==i)
        {
            cout<<i<<" ";
        } 
    }
}