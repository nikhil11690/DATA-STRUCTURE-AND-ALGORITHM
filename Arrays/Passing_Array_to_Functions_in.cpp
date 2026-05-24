// using functions to fill array with any integr 
#include<iostream>
using namespace std;
void fillarray(int arr[], int size){
    for(int i = 0;i<size;i++){
        arr[i] =69;
    }
   
}
void printarray(int arr[],int size){
    for(int i = 0; i<size ;i++){
        cout<<arr[i]<<" ";
    }
}  
int main(){
    int Arr[10];
    fillarray(Arr,10);
    printarray(Arr,10);
    


    int rr[20];
    fillarray(rr,15);
    printarray(rr,15);
    return 0;
}
