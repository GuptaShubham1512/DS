#include<iostream>
using namespace std;

int main(){
    int x=20;
    int *ptr=&x;
    double dec=4.9;
    double *ptrd=&dec;

    cout<<"Size of *ptr:"<<sizeof(x)<<"\n";
    cout<<"Size of dec:"<<sizeof(dec)<<"\n";

    cout<<ptr<<"  "<<(ptr+1)<<"  "<<(ptr+2)<<"  "<<(ptr-1)<<"\n";
    cout<<ptrd<<"  "<<(ptrd+1)<<"  "<<(ptrd+2)<<"  "<<(ptrd-1)<<"\n";
}