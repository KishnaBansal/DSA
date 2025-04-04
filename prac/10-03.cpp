//Sort Colors
class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int n = nums.size();
            int s = 0;
            int e = n - 1;
            int i = 0;
            while(i <= e) {
                if(nums[i] == 0) {
                    swap(nums[i],nums[s]);
                    i++;
                    s++;
                }
                else if(nums[i] == 1) {
                    i++;
                }
                else {
                    swap(nums[i],nums[e]);
                    e--;
                }
            }
            // sort(nums.begin(),nums.end());
        }
    };


//rotate array
class Solution {
    public:
    
        void rev(vector<int>&nums,int s,int e) {
            while(s <= e) {
                swap(nums[s],nums[e]);
                s++;
                e--;
            }
        }
    
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            k = k % n;
            rev(nums,0,n-1);
            rev(nums,0,k-1);
            rev(nums,k,n-1);
        }
    };


//Missing Number
    class Solution {
        public:
            int missingNumber(vector<int>& nums) {
                int n = nums.size();
                int sum = 0;
                int arrSum = 0;
                while(n != 0) {
                    sum += n;
                    n--;
                }
                // for(int i=1;i<=n;i++) {
                //     sum += i;
                // }
                for(int i=0;i<nums.size();i++) {
                    arrSum += nums[i];
                }
                int ans = sum - arrSum;
                return ans;
            }
        };    
//2nd solution
int n=nums.size(),ans=0;
        for(int i=0;i<n;i++) {
            ans^=nums[i];
        }
        for(int i=0;i<=n;i++) {
            ans ^= i;
        }
        return ans;
        
        


//Row with max Ones
class Solution {
    public:
        vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
            int index = -1;
            int n = mat.size();
            int m = mat[0].size();
            int ans = INT_MIN;
            for(int i=0;i<n;i++) {
                int maxOne = 0;
                for(int j=0;j<m;j++) {
                    if(mat[i][j] == 1) {
                        maxOne++;
                    }
                }
                if(ans < maxOne) {
                    index = i;
                }
                ans = max(maxOne,ans);
            }
            vector<int>finalAns = {index,ans};
            return finalAns;
        }
    };
//2nd soln.
for (int i = 0; i < n; ++i) {
    int countOnes = count(mat[i].begin(), mat[i].end(), 1);
    if (countOnes > maxOnes) {
        maxOnes = countOnes;
        index = i;
    }
}


//Rotate image
//NOTE -> DEFINATION OF j IS STAARTING FROM i , otherwise swapping takes two times for same elements
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // transpose(matrix);
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++) {
        reverse(matrix[i].begin(),matrix[i].end());
    }
}