#include<iostream>
#include<vector>
using namespace std;

int maxamount(vector<int> nums){
    int n = nums.size();
    if(n==0){
        return 0;
    }
    if(n==1){
        return nums[0];
    }
    if(n==2){
        return max(nums[0],nums[1]);
    }
    if(n==3){
        int ans=max(nums[0],nums[1]);
        return max(ans,nums[2]);
    }
    
    int ans;
    int house1 = nums[0];
    int house2 = nums[1];
    for(int i = 2;i<n;i++){
        ans=max(nums[i]+house1,house2);
        house1=house2;
        house2 = ans;
    }
    return ans;
}
int main(){
    vector<int> arr{1,2,3,1};
    cout<<maxamount(arr)<<endl;

}