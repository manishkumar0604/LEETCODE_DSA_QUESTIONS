class Solution {
public:
    bool searchInRow(vector<vector<int>>& matrix, int target, int row) {  // for element search in row.
        int n = matrix[0].size();
        int st = 0, end = n - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (target == matrix[row][mid]) return true;
            else if (target > matrix[row][mid]) st = mid + 1;
            else end = mid - 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();

        int startRow = 0, endRow = row - 1; // for row search 
        while (startRow <= endRow) {
            int midRow = startRow + (endRow - startRow) / 2;
            
            if (target >= matrix[midRow][0] && target <= matrix[midRow][column - 1]) { //searchelemntb/wfirst elemnt and last element
                return searchInRow(matrix, target, midRow);
            }
            else if (target > matrix[midRow][column - 1]) {
                startRow = midRow + 1;
            }
            else {
                endRow = midRow - 1;
            }
        }
        return false;
    }
};
