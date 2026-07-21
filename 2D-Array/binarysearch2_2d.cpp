// https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/2075566469/
#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();
        int col = matrix[0].size();
         int rowindex = 0;
         int colindex = col-1;

         while(rowindex < row  && colindex >=0){
            int element = matrix[rowindex][colindex];
            if(element == target){
                return 1;
            }
            if(element <target){
                rowindex++;
            }
            else{
                colindex--;
            }
         }
         return 0 ;
        
    }
};