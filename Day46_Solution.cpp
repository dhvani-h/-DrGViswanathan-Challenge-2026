// Problem: Find Center of Star Graph
// LeetCode 1791
// Day 46

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if(edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])
            return edges[0][0];

        return edges[0][1];
    }
};

// Problem: Prime Number of Set Bits in Binary Representation
// LeetCode 762
// Day 46

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        unordered_set<int> prime = {2,3,5,7,11,13,17,19};

        int ans = 0;

        for(int i = left; i <= right; i++) {
            int bits = __builtin_popcount(i);

            if(prime.count(bits))
                ans++;
        }

        return ans;
    }
};
