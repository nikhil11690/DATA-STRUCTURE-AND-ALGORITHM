//pair sum

#include<iostream>
using namespace std;
 void twosum(int arr[],int size,int target){
    for(int i = 0; i<size;  i++ ){
        for(int j = i+1; j<size; j++){
            if(arr[i]+arr[j] == target){
                cout<<arr[i]<< ","<<arr[j]<<endl;
            }
        }

    }
 }




int main(){
    int arr[5] = {1,2,3,4,5};
    twosum(arr,5,5);

    return 0;


}
