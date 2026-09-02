#include<iostream>
using namespace std;

bool issorted(int arr[] , int n ){
    if(n==1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
       return issorted(arr +1, n-1);
    }
    
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
     int ans = issorted(arr,n);
    if(ans){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"unsorted"<<endl;
    }

    return 0;
}