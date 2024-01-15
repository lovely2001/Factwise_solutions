#include<iostream>
#include<vector>
using namespace std;

int checkfortarget(vector<int> arr,int target){
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>=target){
            return i;
        }
    }
}
int main(){
    vector<int> nums{1,3,5,6};
    int target = 7; 
    cout<<checkfortarget(nums,target)<<endl;
}