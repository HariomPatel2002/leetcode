class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        if(numBottles<numExchange) return numBottles;
        int count = numBottles;
        while(numBottles>=numExchange){
            int t = numBottles/numExchange;
            int remainder = numBottles - t*numExchange;
            numBottles = numBottles/numExchange;
            count+=numBottles;
           // cout<<numBottles<<endl;
            numBottles+=remainder;
        }
        return count;
    }
};