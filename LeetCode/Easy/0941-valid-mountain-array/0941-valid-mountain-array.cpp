class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int size = arr.size();
        if (size < 3) {
            return false;
        }
        int peak = 0;

        while (peak < size - 1 && arr[peak] < arr[peak + 1]) {
            peak = peak + 1;
        }
        if (peak == 0 || peak == size - 1)
            return false;

        for (int i = peak; i < size - 1; i++) {
            if (arr[i] <= arr[i + 1]) {
                return false;
            }
        }

        return true;
    }
};