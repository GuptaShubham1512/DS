#include<iostream>
using namespace std;

//int f(int p,int q){
//base case
//if(q==0)return 1;
//return p*f(p,q-1);
//}
//int main(){
  //  int result=f(17,2);
    //cout<<result;
    //return 0;
//}

//2nd method to solve this problem
#include<iostream>
using namespace std;

int f(int p, int q){
    //base case
    if(q==0)return 1;
    if(q%2==0){
        //if q is even number
        int result=f(p,q/2);
        return result*result;
    }
    else{
        //if q is odd number 
        int result=f(p,(q-1)/2);
        return p*result*result;
    }
}
int main()
{
    int result=f(2,8);
    cout<<result;
    return 0;
}