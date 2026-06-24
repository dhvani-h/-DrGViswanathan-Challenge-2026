// Problem: Count Primes
// LeetCode 204
// Day 49

class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;

        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;

        for(int i = 2; i * i < n; i++) {
            if(prime[i]) {
                for(int j = i * i; j < n; j += i)
                    prime[j] = false;
            }
        }

        int count = 0;

        for(bool x : prime) {
            if(x) count++;
        }

        return count;
    }
};

// Problem: Single Number
// LeetCode 136
// Day 49

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int x : nums)
            ans ^= x;

        return ans;
    }
};
