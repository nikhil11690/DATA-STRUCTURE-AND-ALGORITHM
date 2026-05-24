#include<iostream>
using namespace std;

int countOccurrences(int arr[], int size, int x){
    int count = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == x){
            count++;
        }
    }

    return count;
}

int main(){
    int arr[10] = {1,2,3,2,4,2,5,2,6,2};
    int x;
    cin >> x;

    cout << countOccurrences(arr, 10, x);
}
