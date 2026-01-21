    
    class Solution {
      public:
        bool isPerfect(vector<int> &arr) {
            int l = 0, r = arr.size() - 1;
            while (l < r) {
                if (arr[l] != arr[r])
                    return false;
                l++;
                r--;
            }
            return true;
        }
    };
