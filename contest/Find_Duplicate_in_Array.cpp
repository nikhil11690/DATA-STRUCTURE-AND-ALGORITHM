
// You are given an array of integers 'ARR' containing N elements. Each integer is in the range [1, N-1], with exactly one element repeated in the array.
// Your task is to find the duplicate element. The duplicate element may be repeated more than twice in the error, but there will be exactly one element that is repeated in the array.
// Note :
// All the integers in the array appear only once except for precisely one integer which appears two or more times.
#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
    int slow = arr[0];
    int fast = arr[0];

    // Find intersection point
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    // Find entrance to the cycle
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}
