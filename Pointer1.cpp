#include<iostream>
using namespace std;

int main(){
    int x=23;
    float y=24.5;

    //create pointer for x and y so that evry
    //value of x and y stored on a specified 
    //alloted pointer_to_binary_function//

    int *ptr=&x;
    cout<<ptr<<"\n";

    float *ptr2=&y;
    cout<<ptr2<<"\n";

    return 0;

}