class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int size = arr.size();
        if (size < 3) return false;

        int peak = 0;

        while (peak + 1 < size && arr[peak] < arr[peak + 1]) {
            peak++;
        }


        if (peak == 0 || peak == size - 1) return false;


        while (peak + 1 < size && arr[peak] > arr[peak + 1]) {
            peak++;
        }

        return peak == size - 1;
    }
};
