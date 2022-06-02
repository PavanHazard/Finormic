int Solution::threeSumClosest(vector<int> &A, int B) {
    std::sort(A.begin(), A.end());
        
        int res = A[0] + A[1] + A[2];
        for (int i = 0; i < A.size(); i++)
        {
            int slow = i + 1;
            int fast = A.size() - 1;
            while (slow < fast)
            {
                int cur = A[i] + A[slow] + A[fast];
                if (cur == B)
                    return cur;
                
                if (abs(res - B) > abs(cur - B))
                    res = cur;
                
                if (cur > B)
                    fast--;
                else
                    slow++;
            }
        }
        
        return res;
    }
