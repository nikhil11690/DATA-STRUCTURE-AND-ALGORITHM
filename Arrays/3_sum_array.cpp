#include<iostream>
using namespace std;
 void threesum(int arr[],int size,int target){
    for(int i = 0; i<size;  i++ ){
        for(int j = i+1; j<size; j++){
            for(int k = j+1; k<size; k++){
                if(arr[i]+arr[j]+arr[k] == target){
                cout<< arr[i] << "," << arr[j] << "," << arr[k] << endl ;

            }

            
            }
        }

    }
 }




int main(){
    int arr[5] = {1,2,3,4,5};
    threesum(arr,5,6);

    return 0;


}
