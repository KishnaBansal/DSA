//Searching in a 2d matrix
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int rowSize = matrix.size();
            int colSize = matrix[0].size();
            int matrixSize = rowSize * colSize;
            int s = 0;
            int e = matrixSize - 1;
            while(s <= e) {
                int m = s + (e-s)/2;
                int rowIndex = m / colSize;
                int colIndex = m % colSize;
                int currNum = matrix[rowIndex][colIndex];
                if(currNum == target) {
                    return true;
                }
                else if(currNum > target) {
                    e = m - 1;
                }
                else {
                    s = m + 1;
                }
            }
            return false;
        }
    };