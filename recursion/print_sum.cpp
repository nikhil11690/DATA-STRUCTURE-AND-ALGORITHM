#include<iostream>
using namespace std ;

int printsum(int arr[] , int n){
    if(n==1){
        return arr[0];
    }
    else{
        return arr[0] + printsum(arr+1 , n-1);
    }
}
int main(){
    int arr[] = {23,45,65,68};
    int n = 4;
    int ans = printsum(arr,n);

    cout<<"sum of the arr is: "<<ans<<endl;

    return 0 ;
}