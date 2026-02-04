#include<iostream>
using namespace std;
 
vector<int> leaders(int arr[],int n) {
    vector<int> ans;
    int max=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i] >= max){
            max= arr[i];
            ans.push_back(arr[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
    // Code here
}
 
int main(){
    int arr[]= {5,4,3,4,3,2,1};
    int n=7;
    vector<int>ans = leaders(arr,n);
    for (int num : ans) {
        cout << num << " ";
    }

    
 
    
 
 
    return 0;
}