#include<iostream>
using namespace std;

bool linearsearch(int arr[] , int n , int key){
    if(n==0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        return linearsearch(arr+1 , n-1,key);
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int key = 3;

    int ans = linearsearch(arr , n, key);
    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found ";
    }
}