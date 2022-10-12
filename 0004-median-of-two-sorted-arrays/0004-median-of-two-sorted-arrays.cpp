class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int total = nums1.size() + nums2.size();
        int k = nums1.size();
        int j = 0;
        for(int i = k; i < total; i++){
             nums1.push_back(nums2[j++]);
        }
        
        sort(nums1.begin(), nums1.end());
        
        
        if(total % 2 == 0){
          return  (nums1[(total/2)] + nums1[(total/2) -1 ])/2.0 ;
        }else{
            return nums1[(total - 1)/2];
        }
        
        
    }
};