#include<iostream>
using namespace std;

void colsum(int arr[4][4] , int row , int coloumn){
    for(int j = 0 ; j < 4 ; j++ ){
        int sum = 0 ;
        for(int i = 0 ; i<4 ; i++){
            sum += arr[j][i];
        }

        cout<<"col "<< j << " sum =  "<<sum<<endl;  
    }
}

int main(){
    int arr[4][4];

    cout<<"enter the elements"<<endl;

    for(int  j = 0 ; j<4 ; j++){
        for(int i = 0 ; i<4 ; i++){
            cin>> arr[j][i];
        }
    }
    cout<<"sum of array coloumn wise"<<endl;

    colsum(arr,4,4);

    return 0 ;
}