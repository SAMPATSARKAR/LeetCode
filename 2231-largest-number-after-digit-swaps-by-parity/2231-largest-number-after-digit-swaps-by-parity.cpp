class Solution {
public:
    int largestInteger(int num) {
        string nums = to_string(num);
        priority_queue<char> even;
        priority_queue<char> odd;

        for(char c:nums){
            if((c-'0')%2==0) even.push(c);
            else
                odd.push(c);
        }
        int e=0,o=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]-'0')%2==0) {
                nums[i]=even.top();even.pop();
            }else{
                nums[i]=odd.top();odd.pop();
            }
        }
        return stoi(nums);
    }
};