//majiority element

class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int count = 0;
            int currNum = nums[0];
            for(int it : nums) {
                if(count == 0) {
                    currNum = it;
                }
                if(it == currNum) {
                    count++;
                }
                else {
                    count--;
                }
            }
            return currNum;
        }
    };