#include<iostream>
using namespace std;

vector<vector<int>> threesum(vector<int>& nums,int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<nums.size(); i++){

            if(i>0 && nums[i]==nums[i-1]) continue;
            int left = i+1;
            int right = nums.size()-1;

            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];

                if(sum == target){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;

                    while( left<right &&nums[left] == nums[left-1]) left++;
                    while( left<right &&nums[right] == nums[right+1]) right--;
                    
                }
                else if(sum<target) left++;

                else right--;
            }
           
        }
        return ans;
    }
 
int main(){

    int arr[]={10,20,30,40};
    vector<int>nums = {-1,0,1,2,-1,-4};
    int target=0;
 
    vector<vector<int>> ans= threesum(nums,target);
    for (int i = 0; i < ans.size(); i++) {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j];
            if (j < ans[i].size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
    return 0;
}
