#include<iostream>
using namespace std;

bool ispresent(int arr[3][4] , int target , int row , int col){
     for(int i = 0 ; i<row; i++){
        for(int j = 0 ; j<col ; j++){
            if(arr[i][j]==target){
                return 1;

            }
            
        }
        
    }
    return 0;

}




int main(){
    int arr[3][4];

    // taking input

    for(int row = 0 ; row<3 ;row++){
        for(int col = 0 ; col<4 ; col++){
            cin>>arr[row][col];
        }
    }

    // to print 

    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4; j++){
            cout<< arr[i][j]<<" ";

        }
        cout<<endl;
    }

    cout<<"enter the element to search"<<endl;
    int target;
    cin>>target;

    if(ispresent(arr,target,3,4)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }




    return 0;

}

