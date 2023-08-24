#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int kthLargestSubsequenceSum(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> subsequences;

    
    for (int m = 1; m < (1 << n); ++m) {
        int subseq_sum = 0;
        int i = 0;  
        int tempMask = m;
        
        while (tempMask > 0) {
            if (tempMask & 1) {
                subseq_sum += nums[i];
            }
            tempMask >>= 1;
            ++i;
        }
        
        subsequences.push_back(subseq_sum);
    }
    sort(subsequences.rbegin(), subsequences.rend());

   
    return subsequences[k - 1];
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int k;
    cout << "Enter k: ";
    cin >> k;
    
    cout << "K-Sum: " << kthLargestSubsequenceSum(nums, k) << endl;

    return 0;
}
