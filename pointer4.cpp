#include<iostream>
using namespace std;

void swap(int *x, int *y){
    //try to swap x and  y
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int x=20;
    int y=10;
    int *p1=&x;
    int *p2=&y;

    swap(p1,p2);
    cout<<x<<"  "<<y;
    return 0;
}
//finally run ho gaya...