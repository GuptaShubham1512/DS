#include<iostream>
using namespace std;

int fib(int n) {
    //base case
    if( n==0 or n==1) return n;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int result = fib(5);
    cout<<result;
    return 0;
}