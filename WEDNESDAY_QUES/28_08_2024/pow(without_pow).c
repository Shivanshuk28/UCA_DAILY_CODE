class Solution
{
public:
    long long int PowMod(long long int x, long long int n, long long int m)
    {
        // Code here
        long long ans = 1;
        while (n > 0)
        {
            if (n % 2 == 0)
            {
                x = (x * x) % m;
                n /= 2;
            }
            else
            {
                ans = (ans * x) % m;
                n -= 1;
            }
        }
        return ans;
    }
};