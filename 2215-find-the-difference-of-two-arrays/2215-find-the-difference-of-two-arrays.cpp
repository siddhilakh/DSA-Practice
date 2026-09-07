class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1;
        unordered_set<int> st2;
        vector <int> ans1;
        vector <int> ans2;
        for(int i = 0; i< nums1.size(); i++) {
            st1.insert(nums1[i]);
        }
        for(int i = 0; i< nums2.size(); i++) {
            st2.insert(nums2[i]);
        }
        for(auto x : st1) {
            if(!st2.count(x)) {
                ans1.push_back(x);
            }
        }
        for(auto x : st2) {
            if(!st1.count(x)) {
                ans2.push_back(x);
            }
        }
        return {ans1, ans2};
    }
};