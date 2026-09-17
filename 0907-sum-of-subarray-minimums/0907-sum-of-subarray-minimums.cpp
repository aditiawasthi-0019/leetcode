class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        long long s= 0;
        long long MOD = 1e9 + 7;
        int n = arr.size();
        vector<long long> left(n);
        vector<long long> right(n);
        stack<pair<int,int>> stk;
        for(int i = 0 ;i <n; i++)
        {
            int cnt=1;
            while( !stk.empty() && arr[stk.top().first] >= arr[i])
            {
                cnt += stk.top().second;
                stk.pop();
            }
            stk.push({i,cnt});
            left[i] = cnt;
        }
        while(!stk.empty())
            stk.pop();


        for(int i = n-1 ;i >=0 ; i--)
        {
            int cnt=1;
            while(!stk.empty() && arr[stk.top().first] > arr[i]) {
                cnt += stk.top().second;
                stk.pop();
            }
            stk.push({i , cnt});
            right[i] = cnt;
        }
        for(int i = 0; i < n; i++)
        {
            s = (s + arr[i] * left[i] * right[i]) % MOD;
        }
        return s;
    }
};