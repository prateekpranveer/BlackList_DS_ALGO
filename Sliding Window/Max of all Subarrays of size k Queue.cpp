       // Maximum of all subaarays of size K
       // Time Complexity = O(N*K)
       // Giving TLE
       // Better Approach using doubly ended queue DS
       
        int findMax(vector<int>&nums, int i, int k){
                int maxi = nums[i];
                for (int x = i-k+1; x<=i; x++){
                    maxi = max(maxi,  nums[x]);
                }
                return maxi;
            }
        vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            vector<int>ans;
            int x = k;
            int windowMax = INT_MIN;
            for (int i = 0; i<k; i++){
                windowMax = max(windowMax, nums[i]);
            }
            ans.push_back(windowMax);
            int pushans = 0;
            for (int i =k; i<nums.size(); i++){
                if (windowMax==nums[i-k]){
                    pushans = findMax(nums,i,x);
                    windowMax = pushans;
                }
                else{
                    pushans = max(windowMax, nums[i]);
                    windowMax = pushans;
                }
                ans.push_back(pushans);
            }
            
            return ans;
            
        }
