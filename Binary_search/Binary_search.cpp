#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l =0 , n = nums.size() , r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(target == nums[mid]) return mid;
            else if(target > nums[mid] ) l = mid + 1;
            else if(target < nums[mid]) r = mid -1;
        }
        return -1;
    }
};


int binary_search_custom(vector<int> &a, int target) {
    int l = 0, r = sz(a)-1, ans = -1;
    while(l <= r) {
        int mid = l + (r-l)/2;
        if(a[mid] <= target) {
            ans = mid;
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    return ans; // last index <= target
}
