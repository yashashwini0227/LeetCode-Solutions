class Solution {
public:
    int minMoves(vector<int>& nums) {
                int biggest = nums[0];

        for(int i = 0; i < nums.size(); i = i + 1){
            if(biggest < nums[i]){
                biggest = nums[i];
            }
        }
        int total = 0;
        for(int i = 0; i <nums.size(); i = i + 1){
            total = total + (biggest - nums[i]);
        }
        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna