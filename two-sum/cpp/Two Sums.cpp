// Two Sums.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();     //commits size to memory to reduce memory usage from grabbing it multiple times during the for loops

        for (int i = 0; i < n - 1; i++) { //nested for loop, runs through each pair of numbers without comparing the same pos
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return { i,j };  //returns indices if nums match target value
                }
            }
        }
        return {};
    }
};

void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}

int main()
{
    Solution solver;
    
    //Example 1
    vector<int> nums = {2,7,11,15}; //[2,7,11,15]
    int target = 9; // 9
    std::cout << "When nums = [2,7,11,15] and target = 9, the solver found the following solution [ ";
    print(solver.twoSum(nums,target));
    std::cout << "]" << endl << endl;
    
    //Example 2
    nums = {3,2,4}; //[3,2,4]
    target = 6; // 6
    std::cout << "When nums = [3,2,4] and target = 6, the solver found the following solution [ ";
    print(solver.twoSum(nums,target));
    std::cout << "]" << endl << endl;
    
    // Example 3
    nums = {3,3}; //[3,3]
    target = 6; // 6
    std::cout << "When nums = [3,3] and target = 6, the solver found the following solution [ ";
    print(solver.twoSum(nums,target));
    std::cout << "]" << endl << endl;
}
