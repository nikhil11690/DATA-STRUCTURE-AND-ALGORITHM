//swap elements 

#include<iostream>
using namespace std;

void printarr(int arr[], int size){
    for(int i= 0; i<size ; i++){
        cout<<arr[i]<<" ";
       
    }
}


void swapalternate(int arr[],int size){
    for(int i =0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main() {
    int even[8] = {2,5,7,8,9,4,1,6};
    int odd[5] = {1,2,3};

    swapalternate(even,8);
    printarr(even,8);

    cout<<endl;

    swapalternate(odd,3);
    printarr(odd,3);

    return 0;


// }
