/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray& mountainArr) {
        int n = mountainArr.length();
        int l = 0, r = n - 1;
        while (l < r) {
            int m = (l + r) / 2;
            if (mountainArr.get(m) > mountainArr.get(m + 1))
                r = m;
            else
                l = m + 1;
        }
        int p = l;
        int left = 0, right = p;
        while (left <= right) {
            int m = (left + right) / 2;
            if (mountainArr.get(m) > target)
                right = m - 1;
            else if (mountainArr.get(m) < target)
                left = m + 1;
            else
                return m;
        }
        left = p + 1;
        right = n - 1;
        while (left <= right) {
            int m = (left + right) / 2;
            if (mountainArr.get(m) > target)
                left = m + 1;
            else if (mountainArr.get(m) < target)
                right = m - 1;
            else
                return m;
        }
        return -1;
    }
};
