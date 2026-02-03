#include<iostream>
using namespace std;

bool findtarget(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;

        }

    }
    return false;
}


int main(){
    
    int arr[]={2,4,6,8,20,24};
    int size=6;
    int target=20;
    
    cout<<"ans : "<<findtarget(arr,size,target);
    
    return 0;
}