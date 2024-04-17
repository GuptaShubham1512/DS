#include<iostream>
using namespace std;

//int Sum_Co(int x , int y){
//int result = 0;
//for(int i=x; i<=y; i++){
  //  result+=i;
//}
//return result;//
//}

//int main(){
  //  cout<<Sum_Co(2,6);
    //return 0;

//}

//Using  time complexities  lets solve  it

int Sum_inRangeOptimised(int x,int y){
    int n=(y-x-1);
    int a=x;
    int result=(n*(2*a + (n-1)*1))/2;
    return result;
}

int main(){
    cout<<Sum_inRangeOptimised(2,6);
    return 0;

}