<<<<<<< HEAD
#include<iostream>
using namespace std;
//Targetsumm problem 
int main()
{
   // int array[] = {3,4,6,7,1};
    //int targetsum=7;
    //int size =5;
    //int pairs=0;
    
    //for(int i=0;i<size;i++){
      //  for(int j=i+1;j<size;j++){
            
        //    if(array[i]+array[j]==targetsum){
          //      pairs++;
            //}
        //}
//}
//cout<<pairs<<endl;
//}



//tripllet whose sumis equal to x
int array[] = {3,4,1,6,7,1};
    int targetsum=8;
    int size =7;
    int triplets=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(array[i]+array[j]+array[k]==targetsum){
                    triplets++;
                }
              }
            }
         }
            cout<<triplets<<endl;
}



#include<iostream>
using namespace std;
//Targetsumm problem 
int main()
{
   // int array[] = {3,4,6,7,1};
    //int targetsum=7;
    //int size =5;
    //int pairs=0;
    
    //for(int i=0;i<size;i++){
      //  for(int j=i+1;j<size;j++){
            
        //    if(array[i]+array[j]==targetsum){
          //      pairs++;
            //}
        //}
//}
//cout<<pairs<<endl;
//}



//tripllet whose sumis equal to x
int array[] = {3,4,1,6,7,1};
    int targetsum=8;
    int size =7;
    int triplets=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(array[i]+array[j]+array[k]==targetsum){
                    triplets++;
                }
              }
            }
         }
            cout<<triplets<<endl;
}


>>>>>>> 4b47bf45f771b0362b3284ccf4d6a9402a6daba7
