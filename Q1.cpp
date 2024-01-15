#include<iostream>
#include<vector>
using namespace std;

int removeduplicates(vector<int> arr){
    vector<int> ans;
    int n=arr.size();
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]!=arr[i+1]){
            ans.push_back(arr[i]);
        }
    }ans.push_back(arr[n-1]);

    return ans.size();
}

int main(){
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    cout<<removeduplicates(nums);
    
}