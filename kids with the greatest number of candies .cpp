class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> ans(n);
        int greatest = candies[0];

        for (int i = 1; i < n; i++) {
            if (candies[i] > greatest) {
                greatest = candies[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (candies[i] + extraCandies >= greatest) {
                ans[i] = true;
            } else {
                ans[i] = false;
            }
        }

        return ans;
    }
};
