#include<iostream>
using namespace std;

void rowsum(int arr[3][3], int row , int col){
    for(int i = 0 ; i<3 ; i++){
        int sum = 0;
        for(int j = 0 ; j<3 ;j++){
            sum +=arr[i][j];
        }
        cout<<"row"<<  i <<" sum = "<<sum<<endl;
    }
}


int main(){
    int arr[3][3];
    cout<<"enter the number"<<endl;

    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            cin>>arr[i][j];
        }
    }
    

    cout<<"sum of array row-wise"<<endl;

    rowsum( arr,3,3);
    

    return 0;


}
