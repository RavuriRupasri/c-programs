#Factorial Finder - The Factorial of a positive integer, n, is defined as the product of the sequence n, n-1, n-2, ...1 and the factorial of zero, 0, is defined as being 1. Solve this using both loops and recursion.
#include<iostream>
using namespace std;
int fact(int num)
{
    if(num==0)
    return 1;
    else
    return num*fact(num-1);
}
int main()
{
    int num,i;
    print:cout<<"Enter the number to find the factorial: ";
    cin>>num;
    while(num<0)
    {
        cout<<"Factorial cannot be executed for a negative number\n";
        goto print;
    }
    cout<<"The factorial of a given number is: "<<fact(num);
}