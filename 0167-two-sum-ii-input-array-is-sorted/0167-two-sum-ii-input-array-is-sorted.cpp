class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size()-1;
        int i=0,j=n;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                // v.push_back({i});
                // v.push_back({j});
                return {i+1,j+1};
            }else if(numbers[i]+numbers[j]>target){
                j--;
            }else{
                i++;
            }
        }
        return {};
    }
};