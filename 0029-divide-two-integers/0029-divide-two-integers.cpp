class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == divisor)
            return 1;

        bool sign = (dividend < 0) == (divisor < 0);

        long long n = llabs((long long)dividend);
        long long d = llabs((long long)divisor);

        long long ans = 0;

        while (n >= d) {
            int cnt = 0;

            while (n >= (d << (cnt + 1))) {
                cnt++;
            }

            ans += (1LL << cnt);
            n -= (d << cnt);
        }

        if (ans > INT_MAX && sign)
            return INT_MAX;

        if (ans > (long long)INT_MAX + 1 && !sign)
            return INT_MIN;

        return sign ? ans : -ans;
    }
};