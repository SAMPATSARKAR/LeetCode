class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n1 = nums.size();
        vector<int> p;
        vector<int> n;

        for(int i=0;i<n1;i++){
            if(nums[i]>0){
                p.push_back(nums[i]);
            }else{
                n.push_back(nums[i]);
            }
        }

        if(n.size()==0)//no negative element
        {
            for(int i=0;i<n1;i++){
                nums[i]=nums[i]*nums[i];
            }
        }
        if(p.size()==0)//no pos element
        {
            for(int i=0;i<n1;i++){
                nums[i]=nums[i]*nums[i];
            }
            reverse(nums.begin(),nums.end());
        }
        //mixed

        int i=0,j=0;
        int n2=p.size(),n3=n.size();
        for(int i=0;i<n2;i++){
            p[i]=p[i]*p[i];
        }
        for(int i=0;i<n3;i++){
            n[i]=n[i]*n[i];
        }
        reverse(n.begin(),n.end());
        int k=0;
        while(i<n2 && j<n3){
            if(p[i]<n[j]){
                nums[k]=p[i];
                i++;
                k++;
            }else {
                nums[k]=n[j];
                j++;
                k++;
            }
        }
        while(i<n2){
            nums[k]=p[i];
            i++;
            k++;
        }
        while(j<n3){
            nums[k]=n[j];
            j++;
            k++;
        }

        return nums;

    }
};