//binary search implementation 

#include<iostream>
using namespace std;
int searchkey(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;

    }
    return -1;
}
int main(){
    int even[8] ={1,2,3,4,5,6,7,8};
    int odd[5]  = {8,11,13,15,27};

    
    int ans1 = searchkey(even,8,6);
    cout<<"index of k is"<< " " <<ans1<<endl;


    int ans2 = searchkey(odd,5,2);
    cout<<"index of k is"<< " " <<ans2<<endl;

    return 0;

    

}
