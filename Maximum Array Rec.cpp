#include<iostream>
using namespace std;
//MAXIMUM ARRAY PROBLEM USING RECURSION

int f( int *arr,int idx, int n){
    //base case
    if(idx==n-1){
        //only one element left
        return arr[idx];
    }
    return max(arr[idx], f(arr,idx+1,n));
}

int main(){
    int arr[] = {3,2,10,8,6};
    int n=5;
    cout<<f (arr,0,n);
    return 0;
    
} 

//Sum of array using recursion

//int f( int *arr,int idx, int n){
    //base case
  //  if(idx==n-1){
        //only one element left
    //    return arr[idx];
    //}
    //return arr[idx]+f(arr,idx+1,n);
//}

//int main(){
  //  int arr[] = {3,2,10,8,6};
    //int n=5;
    //cout<<f (arr,0,n);
    //return 0;
    
//} 