class NumArray {
private:
    int n;
    vector<int> nums;
    vector<int> tree;

    int prefix(int i) {  // sum of nums[0..i-1]
        int s = 0;
        while (i > 0) {
            s += tree[i];
            i -= i & -i;
        }
        return s;
    }

public:
    NumArray(vector<int>& nums) {
        n = nums.size();
        this->nums = nums;
        tree.assign(n + 1, 0);
        // O(n) build
        for (int i = 1; i <= n; i++) {
            tree[i] += nums[i - 1];
            int j = i + (i & -i);
            if (j <= n) tree[j] += tree[i];
        }
    }

    void update(int index, int val) {
        int delta = val - nums[index];
        nums[index] = val;
        for (int i = index + 1; i <= n; i += i & -i) {
            tree[i] += delta;
        }
    }

    int sumRange(int left, int right) {
        return prefix(right + 1) - prefix(left);
    }
};
