#Fast Exponentiation - Ask the user to enter 2 integers a and b and output a^b (i.e. pow(a,b)) in O(lg n) time complexity.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter base and exponent: ";
    cin>>x>>y;
    cout<<pow(x,y)<<" is the power of "<<x<<" ^ "<<y;
    return 0;
}