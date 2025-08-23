// reversing an array by k times 

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;
        k =k%n;
        int i,j;
    //   reversing last k elements
            for(i=n-k,j=n-1;i<j;i++;j--){
                int temp = nums[i];
                nums[i]=nums[j];
                nums[j] =temp;
            }
    //  reversing n-k elements
            for (i=0,j=n-k;i<j;i++;j--){
                 int temp = nums[i];
                nums[i]=nums[j];
                nums[j] =temp;
            }
    //  reversing whole array 
             for (i=0,j=n;i<j;i++;j--){
                 int temp = nums[i];
                nums[i]=nums[j];
                nums[j] =temp;
            }
    }
}