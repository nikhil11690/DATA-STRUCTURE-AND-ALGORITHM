#include<iostream>
using namespace std;
int arraysum(int arr[],int size){

    int sum = 0;

    for(int i = 0; i<size ; i++){

         sum = arr[i] + sum;
    }
    return sum;
}
int main(){
    int v[15] = {1,2,3,4,5,6,7,8,9,10};
    
    cout<< arraysum(v,5) ;
    return 0;

}
