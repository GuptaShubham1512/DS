#include<iostream>
#include<vector>
using namespace std;

int maximumOnesRows(vector<vector<int> >&V){
    int maxOnes = INT_MIN;
    int maxOnesRow = -1;
    int columns = V[0].size();

    for(int i=0;i<V.size();i++){
        for(inr j=0;j<v[i].size();j++){

            if(v[i][j]==1){
                int numberOfOnes = columns-j;
                if(numberOfOnes>maxOnes){
                    maxOnes=numberOfOnes;
                    maxOnesRows=i;
                }
                break;
            }
        }
    } 
    return 0;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> >vec(n.vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int res = maximumOnesRow(vec);
    cout<<res<<endl;

}
