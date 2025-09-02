class Solution
{
public:
    int trailingZeroes(int n)
    {
        int zeroes = 0;
        while (n >= 5)
        {             // A trailing zero is created by the factor 10, which comes from 2 × 5.
            n /= 5;  // In any factorial, the number of 2s is more than the number of 5s, so the number of 5s in                the                            prime factorization determines the number of trailing zeros.
            zeroes += n;
        }
        return zeroes;
    }
};
