class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxSum=0;
        int n = cardPoints.size();
        int sumleft=0;
        for(int i=0;i<k;i++){
            sumleft+=cardPoints[i];
        }

        maxSum = sumleft;
        int sumright=0;
        for(int i=0;i<k;i++){
            sumright+=cardPoints[n-i-1];
            sumleft-=cardPoints[k-i-1];
            maxSum=max(maxSum,sumleft+sumright);
        }
        return maxSum;

    }
};