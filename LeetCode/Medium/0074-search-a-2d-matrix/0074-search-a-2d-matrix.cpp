class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for (int i = 0; i < matrix.size(); i++) {
            if(matrix[i][matrix[i].size()- 1] >= target)
                if (binaryFind(matrix[i], target))
                    return true;
            else continue;
        }
        return false;
    }

private:
    bool binaryFind(vector<int> nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return true;
            else if (nums[mid] > target)
                high = mid - 1;
            else if (nums[mid] < target)
                low = mid + 1;
        }
        return false;
    }
};