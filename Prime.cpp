#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(int i = a; i <= b; i ++)
using namespace std;

bool checkPrime(int number)
{
	if(number < 2) return false;
	for(int i = 2; i <= sqrt(number); i++)
		if(number % i == 0)
			return false;
	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int nInput;
	cin >> nInput;
	int nArray;
	while(nInput--)
	{
		cin >> nArray;
		if(checkPrime(nArray))
			cout << nArray << " ";
	}
	return 0;
}

