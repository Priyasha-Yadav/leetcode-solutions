class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int total = numBottles;
       int empty = numBottles;
        while(empty >= numExchange){
            int refill = empty/numExchange;
            total += refill;
            empty = empty % numExchange + refill;
        }
        return total;
    }
};