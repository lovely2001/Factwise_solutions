#include<iostream>
#include<vector>
using namespace std;

int startindex(vector<int>gas,vector<int>cost){
    for(int i=0;i<gas.size();i++){
        int capacity=0;
        for(int j=i+1;j<gas.size();j++){
            capacity+=gas[i]+gas[j]
        }
    }
}

int main(){
    vector<int> gas{1,2,3,4,5};
    vector<int> cost{3,4,5,1,2};

    cout<<startindex(gas,cost)<<endl;
}