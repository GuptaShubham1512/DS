#include<iostream>
#include<vector>
using namespace std;

//print all subset on it

void f(int *arr, int n, int i, int sum, vector<int>&result){
    //basecase
    if(i==n){
        result.push_back(sum);
        return;
    }
    f(arr,n,i+1,sum+arr[i],result);//pick
    f(arr,n,i+1,sum,result);//unpick

}
int main(){
    int arr[]={2,4,5};
    int n=3;
    vector<int>result;
    f(arr,n,0,0,result);
    for(int i=0; i<result.size(); i++){
    cout<<result[i]<<"  ";
}
return 0;
}