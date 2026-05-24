// linear search : check whther the element is preesent or not in the provided array 

#include<iostream>
using namespace std;
int find(int arr[], int size,int n){
            
    for(int i = 0 ; i<size ; i++){
        if(arr[i] ==  n){
            cout<<"found";
            return i;
        }
       
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    cout<<find(arr,10,n);

}
