#include<iostream>
using namespace std;

void swap(int x,int y){
    //try to swap x and  y
    int temp=x;
    x=y;
    y=temp;
}

int main(){
    int x=20;
    int y=10;

    swap(x,y);
    cout<<x<<"  "<<y;
    return 0;
}

//till here we can see there is 
//no swapping 
//from maintype we print x and y itself
//further look into the pointer 4 cpp 