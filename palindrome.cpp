#include<iostream>
using namespace std;

bool f(int num,int*temp){
//base case
if (num>=0 and num<=9){
    return(num==(*temp)%10);
}
bool result = (f(num/10,temp) and (num%10)==((*temp)%10));
(*temp)/=10;
return result;
}

int main()
{
    int num = 12621;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout<<f(num,temp);
    return 0;
}
