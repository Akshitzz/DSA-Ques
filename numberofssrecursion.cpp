class Solution {
public:
    void findCombination(int ind , int target , vector<vector<int>>&ans , vector<int>&candidates,vector<int>&ds){
        if(ind == candidates.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[ind] <= target ){
            ds.push_back(candidates[ind]);
            findCombination(ind ,target-candidates[ind],ans,candidates,ds);
            ds.pop_back();
        }
        findCombination(ind +1,target,ans,candidates,ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans ;
    vector <int> ds ;
     findCombination(0 ,target,ans,candidates,ds);
     return ans ;   
    }
};