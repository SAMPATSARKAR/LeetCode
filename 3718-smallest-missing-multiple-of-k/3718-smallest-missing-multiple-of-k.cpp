class Solution {
public:
    bool find1(int x,vector<int> v){
        for(auto q:v){
            if(x==q){
                return true;
            }
        }
        return false;
    }
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int x=0;
        
            for(int i=1;i<=101;i++){
                x = k*i;
                if(find1(x,nums)){
                    continue;
                }else{
                    
                    break;
                }

            }
        
            return x;
        
        
    }
};