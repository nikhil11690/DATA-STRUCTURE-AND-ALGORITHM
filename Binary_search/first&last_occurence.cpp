// find first and last occurence 

#include<iostream>
using namespace std;
int firstoccurnece(int arr[], int size , int k){
    int start = 0;
    int end  = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == k){
            ans = mid;
            end = mid-1;
        }
        else if(k > arr[mid]){
            start = mid +1;


        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastoccurnece(int arr[], int size , int k){
    int start = 0;
    int end  = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == k){
            ans = mid;
            start = mid + 1;
        }
        else if(k > arr[mid]){
            start = mid +1;


        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int arr[4] = {1,3,3,4};

   
    int ans1 =firstoccurnece(arr,4,3);
     cout<<"first occurence of key at index is "<<ans1<<endl;
    int ans2= lastoccurnece(arr,4,3);
     cout<<" last occurence of key at index is "<<ans2<<endl;

     return 0;

}
