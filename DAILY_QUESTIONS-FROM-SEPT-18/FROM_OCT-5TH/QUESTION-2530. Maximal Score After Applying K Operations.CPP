//date: 16/10/24
//biweekly contest 141
//https://leetcode.com/problems/maximal-score-after-applying-k-operations/?envType=daily-question&envId=2024-10-14

class Solution {
 public:
  long long maxKelements(vector<int>& nums, int k) {
    long ans = 0;
    priority_queue<int> maxHeap;

    for (const int num : nums)
      maxHeap.push(num);

    for (int i = 0; i < k; ++i) {
      long long num = maxHeap.top();//maximum score element
      maxHeap.pop();
      ans += num;
      maxHeap.push(ceil(double(num ) / 3));
    }

    return ans;
  }
};