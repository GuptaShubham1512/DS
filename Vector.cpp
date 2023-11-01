#include<iostream>
#include<vector>
using namespace std;

//count number of  elements strictly greater than value x
int main(){
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout<<"enter the value of x:";
    int x;
    cin>>x;

    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }

    cout<<count<<endl;
}
