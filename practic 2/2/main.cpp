#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

int RandomGenerator()
{
	static mt19937 rnd((uint64_t)&rnd);
	uniform_int_distribution<int> d(-1000000000,1000000000);
	return d(rnd);
}

int main(int argc, char **argv)
{
	vector<int> f;
	for(int i=0; i<10000000; i++) {
		f.push_back(rand() % 1000000000 -1000000000);
	}
	vector<int> v(10000000);
	generate(v.begin(),v.end(),RandomGenerator);
	vector<int> w(10000000);
	w.assign(v.begin(), v.end());
	return 0;
}