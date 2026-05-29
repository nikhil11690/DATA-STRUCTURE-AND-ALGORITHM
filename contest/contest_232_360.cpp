// A music streaming system monitors the volume levels of a track over time.
// To ensure a smooth listening experience, the change in volume between consecutive time points should not exceed a given threshold X.
// You are given an array of volume levels. Your task is to count how many times the change between adjacent elements exceeds X.
// Formally, count the number of indices i such that: |volume[i] - volume[i-1]| > X
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 5 3
// 10 12 15 20 18
// Sample Output 1:
// 1
#include <bits/stdc++.h>

int countViolations(int n, int x, vector<int>& volume) {
    int count = 0;
        for(int i = 1 ; i<n ; i++){
            if(abs(volume[i]-volume[i-1])>x){
                count++;
            }

        }
        return count;
}
