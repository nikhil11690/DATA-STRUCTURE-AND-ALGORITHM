
// You are given with an array of integers and an integer K. You have to find and print the count of all such pairs which have difference K.

// Note: Take absolute difference between the elements of the array.
#include <unordered_map>

int getPairsWithDifferenceK(int *arr, int n, int k) {
    
    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int count = 0;

    if(k == 0) {
        for(auto it : freq) {
            int f = it.second;
            count += (f * (f - 1)) / 2;
        }
    }
    else {
        for(auto it : freq) {
            int num = it.first;

            if(freq.find(num + k) != freq.end()) {
                count += freq[num] * freq[num + k];
            }
        }
    }

    return count;
}
