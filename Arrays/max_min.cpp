// MAX- MIN element in AN ARRAY ;

#include<iostream>
using namespace std;
int getmax(int arr[],int size){
    int max = arr[0];
    for(int i = 1; i<size ; i++){
        if(arr[i]> max){
            max = arr[i];
        }

    }
    return max;
}
int getmin(int arr[],int size){
    int min = arr[0];
    for(int i = 1; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    
    int arr[5] = { -4,-6,-8,8,-1};

    cout<<"maximum :"<<getmax(arr,5)<<endl;

    cout<<"minimum: "<<getmin(arr,5)<<endl;

    return 0;

    
}
