// reverse array 
#include<iostream>
using namespace std;

void reverse(int Arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(Arr[start],Arr[end]);
        start++;
        end--;

    }
}

void printarray(int Arr[],int n){
    for(int i=0; i<n; i++){
        cout<<Arr[i];
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    reverse(arr,5);
    printarray(arr,5);
    cout<<endl;

    int rr[5] = {5,4,3,2,1};
    reverse(rr,5);
    printarray(rr,5);

    return 0;
}
