class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        int n1 = nums.size();
        for(int i=0;i<n1;i++){
            if(nums[i]>=0){
                p.push_back(nums[i]);
            }else{
                n.push_back(nums[i]);
            }
        }
        bool a=true;
        int k=0;
        int i=0,j=0;
        while(i<p.size() || j<n.size()){
            if(a){
                nums[k++]=p[i++];
                a=false;
            }else{
                nums[k++]=n[j++];
                a=true;
            }
        }
        // while(i<p.size()){
        //     nums[k++]=p[i++];
        // }
        // while(j<n.size()){
        //     nums[k++]=n[j++];
        // }
        return nums;
    }
};