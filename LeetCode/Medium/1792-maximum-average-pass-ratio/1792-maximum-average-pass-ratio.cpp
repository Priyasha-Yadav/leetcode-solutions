#include <vector>
#include <queue>

using namespace std;

class Solution {
public:

    double gain(int pass, int total) {
        return ((double)(pass + 1) / (total + 1)) - ((double)pass / total);
    }

    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {

        priority_queue<pair<double, pair<int, int>>> maxHeap;


        for (auto& c : classes) {
            int pass = c[0], total = c[1];
            maxHeap.push({gain(pass, total), {pass, total}});
        }


        while (extraStudents-- > 0) {
            auto [_, classInfo] = maxHeap.top();
            maxHeap.pop();

            int pass = classInfo.first + 1;
            int total = classInfo.second + 1;

            maxHeap.push({gain(pass, total), {pass, total}});
        }


        double totalRatio = 0.0;
        while (!maxHeap.empty()) {
            auto [_, classInfo] = maxHeap.top();
            maxHeap.pop();

            totalRatio += (double)classInfo.first / classInfo.second;
        }

        return totalRatio / classes.size();
    }
};
