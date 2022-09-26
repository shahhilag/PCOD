#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	if (n <= 1)
		return false;

	for (int i = 2; i < n/2; i++)
		if (n % i == 0)
			return false;

	return true;
}

int main()
{
	isPrime(11) ? cout << " true\n" : cout << " false\n";
	isPrime(15) ? cout << " true\n" : cout << " false\n";
	return 0;
}

//Time Complexity - O(N) [It is an optimisation over O(N) as to be precise this program takes tome complexity of O(N/2)]
//Space Complexity - O(1)