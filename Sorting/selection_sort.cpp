// Selection sort is one of the sorting algorithms that works by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning of the unsorted region of the array.

// You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Selection Sort algorithm.

// For Example:
// Selection Sort implementation for the given array:  {29,72,98,13,87,66,52,51,36} is shown below :-

#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0 ; i<n ; i++){
        int minindex = i;
        for(int j = i+1; j<n ; j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[minindex],arr[i]);

    }
}
