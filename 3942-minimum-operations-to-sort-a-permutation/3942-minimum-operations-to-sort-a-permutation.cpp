class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        if (is_sorted(nums.begin(), nums.end())) {
            return 0;
        }

        int target = -1;

        
        bool ok1 = true;
        int c1 = ((nums[0] - 0) % n + n) % n;

        for (int i = 0; i < n; i++) {
            int c = ((nums[i] - i) % n + n) % n;
            if (c != c1) {
                ok1 = false;
                break;
            }
        }

        if (ok1) {
            int k = (n - c1) % n;
            target = k; 
        }

       
        bool ok2 = true;
        int c2 = ((nums[n - 1] - 0) % n + n) % n;

        for (int i = 0; i < n; i++) {
            int val = nums[n - 1 - i];
            int c = ((val - i) % n + n) % n;
            if (c != c2) {
                ok2 = false;
                break;
            }
        }

        if (ok2) {
            int k = (n - c2) % n;
            int state = n + k; 
            if (target == -1 || state < target) {
                target = state;
            }
        }

        if (target == -1) return -1;

        vector<int> dist(2 * n, -1);
        queue<int> q;

        dist[0] = 0; 
        q.push(0);

        while (!q.empty()) {
            int state = q.front();
            q.pop();

            int k = state % n;
            int flag = state / n;

            
            int nk = (k + 1) % n;
            int ns = flag * n + nk;

            if (dist[ns] == -1) {
                dist[ns] = dist[state] + 1;
                q.push(ns);
            }

           
            int rs;
            if (flag == 0) {
                rs = n + ((n - k) % n); 
            } else {
                rs = k; 
            }

            if (dist[rs] == -1) {
                dist[rs] = dist[state] + 1;
                q.push(rs);
            }
        }

        return dist[target];
    }
};