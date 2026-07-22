class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for(auto x:gifts){
            pq.push(x);
        }
        vector<int> v;
        long long sum=0;
        while(k--){
            int f = pq.top();
            pq.push(sqrt(f));
            pq.pop();
        };
        while(pq.size()>0){
            sum+=pq.top();
            pq.pop();

        }
        return sum;
    }
};