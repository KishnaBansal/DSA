//Pivot index
class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
            int rightSum = 0,leftSum = 0,n = nums.size();
            for(int i=0;i<n;i++) {
                rightSum += nums[i];
            }
            for(int i=0;i<n;i++) {
                rightSum -= nums[i];
                if(leftSum == rightSum) return i;
                leftSum += nums[i];
            }
            return -1;
        }
    };
//keep in mind the algorithm


//Find duplicate number -> Important logic
class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
            while(nums[0] != nums[nums[0]]) {
                swap(nums[0],nums[nums[0]]);
            }
            return nums[0];
        }
    };




//Unique element in a sorted array
    class Solution {
        public:
            int removeDuplicates(vector<int>& nums) {
                int i = 0;
                int j = i+1;
                while(j < nums.size()) {
                    if(nums[i] == nums[j]) {
                        j++;
                    }
                    else {
                        i++;
                        nums[i] = nums[j];
                        j++;
                    }
                }
                return i+1;
            }
        };


//Sliding window basic approach

        double findMaxAverage(vector<int>& nums, int k) {
            int n = nums.size() - 1;
            int i = 0;
            int j = k-1;
            int sum = 0;
            for(int a=i;a<=j;a++) {
                sum += nums[a];
            }
            int maxSum = sum;
            while(j < n) {
                sum -= nums[i];
                sum += nums[j+1];
                i++;j++;
                maxSum = max(maxSum,sum);
            }
            double avg = (double)maxSum/(double)k;
            return avg;
        }