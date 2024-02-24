long long num(long long n, long long k)
{
    long long odd = (n + 1) / 2;
    if (k <= odd)
    {
        return 2 * k - 1;
    }
    else
    {
        return 2 * (k - odd);
    }
}