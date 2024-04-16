#include<iostream>
using namespace std;

//f reperseents whether x is present or not in an array
bool f(int *arr, int n, int i, int x){
if(i==n){
    //array is exhausted
    return false;
}
return (arr[i]==x) || f(arr,n,i+1,x);
}

int main(){
    int arr[] ={5,3,9,5,-2,3,5,2,1,3,4,8,5,3};
    int n=14;
    int x=9;
    bool result=f(arr,n,0,x);
    if(result) 
    cout<<"yes";
    else
    cout<<"No";
    return 0;

}