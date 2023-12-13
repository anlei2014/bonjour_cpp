#include <iostream>
#include <vector>

using namespace std;
/*
 * 搜索插入位置
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
请必须使用时间复杂度为 O(log n) 的算法。
 
示例 1:
输入: nums = [1,3,5,6], target = 5
输出: 2
示例 2:
输入: nums = [1,3,5,6], target = 2
输出: 1
示例 3:
输入: nums = [1,3,5,6], target = 7
输出: 4
 
提示:
1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums 为 无重复元素 的 升序 排列数组
-104 <= target <= 104

 * */
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int hight = nums.size() - 1;
        int mid;
        while (low <= hight)
        {
            mid = (low + hight) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] > target)
            {
                hight = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};

void test()
{
    Solution s;
    int r;
    vector<int> nums = {1,3,5,6};

    r = s.searchInsert(nums,5);
    cout << r <<endl;
}

int main() {
    test();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
