class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double k, f;
        k = celsius + 273.15;
        f = (celsius * 1.80) + 32.00;
        return {k, f};
    }
};