// you are the Librarian of the Ninja library. There are ‘N’ books available in the library and ‘B’ ninjas want to read the books. You know the number of pages in each book and you have to allocate the books to the ‘B’ ninjas in such a way that the maximum number of pages allocated to a ninja is minimum.

// Note

// A book will be allocated to exactly one ninja. 
// At least one book has to be allocated to a ninja.
// Allotment of the books should be done in a contiguous manner. For example, a ninja can not be allocated book 2 and book 4, skipping book 3.
// The task is to return the minimum of the maximum number of pages allocated to a ninja.


#include <bits/stdc++.h>
using namespace std;

// ? Check karo ki maxPages limit mein B ninjas ko books mil sakti hain?
bool isPossible(vector<int>& pages, int n, int b, int maxPages) {
    int ninjaCount = 1;
    int pageSum    = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + pages[i] <= maxPages) {
            pageSum += pages[i];      // same ninja ko do
        } else {
            ninjaCount++;             // naya ninja
            pageSum = pages[i];       // usse yeh book do

            if (ninjaCount > b)       // ninjas limit cross ho gayi
                return false;
        }
    }
    return true;
}

int allocateBooks(vector<int>& pages, int n, int b) {
    
    //  Edge Case: ninjas zyada, books kam
    if (b > n) return -1;

    // ?? Binary Search ki range
    int low  = *max_element(pages.begin(), pages.end()); // min answer
    int high = accumulate(pages.begin(), pages.end(), 0); // max answer
    int ans  = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(pages, n, b, mid)) {
            ans  = mid;        // possible hai, save karo
            high = mid - 1;   // aur minimize karne ki koshish karo
        } else {
            low = mid + 1;    // pages badhaao
        }
    }
    return ans;
}
