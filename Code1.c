int minSwaps(int* nums, int s) {
        int maxi=0,curr=0,ones=0;
        int l=0;
        for(int i=0;i<s;i++){
            if(nums[i]==1)
            ones++;
        }
        for(int r=0;r<2*s;r++){
            if(nums[r%s]){
                curr++;
            }
            if(r-l+1>ones){
                curr-=nums[l%s];
                l++;
            }
            maxi=fmax(maxi,curr);
        }
        return ones-maxi;
}
