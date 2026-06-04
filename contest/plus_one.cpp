// You are given a large integer represented as an array of its digits, digits. The digits are ordered from most significant to least significant (left-to-right). For example, the number 123 would be represented as the array [1, 2, 3]. The input integer is guaranteed not to have any leading zeros.
// Your task is to increment this large integer by one and return the resulting array of digits.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 3
// 1 2 3
// Sample Output 1:
// 1 2 4
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();

    for(int i = n - 1; i >= 0; i--) {
        if(digits[i] < 9) {
            digits[i]++;
            return digits;
        }

        digits[i] = 0;
    }

    digits.insert(digits.begin(), 1);
    return digits;
}
