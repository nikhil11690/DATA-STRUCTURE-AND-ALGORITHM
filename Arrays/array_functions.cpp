// array using functions

#include<iostream>
using namespace std;
void printarray(int arr[],int size){

    for(int i = 0; i<size; i++ ){
    cout<<arr[i]<<" ";
    }
}

int main(){
    int n[10] = {1,2,3,4,5,6,7};

    printarray(n,10);

    return 0;
}
