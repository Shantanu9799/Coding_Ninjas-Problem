#include <bits/stdc++.h> 

const long long MOD = 1000000007;

long long int product(long long int n) {
    long long int result = 1;
    for (long long int i = 2; i <= n; ++i) {
        result = (result * i) % MOD;
    }
    return result;
}


long long int sum(long long int n) {
	long long int sum = n * (n+1) / 2;
	return sum;
}

long long int sumOrProduct(long long int n, long long int q)
{
	// Write your code here.
	return q == 1 ? sum(n) : product(n);
}
