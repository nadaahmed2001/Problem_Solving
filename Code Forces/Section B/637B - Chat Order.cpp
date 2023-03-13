#include <iostream>
#include<map>
#include<vector>
using namespace std;


int main()
{
	int n,cntr=0;
	map<string, bool> m;
	vector<string>v;
	cin >> n;
	string recipient;
	for (int i = 0; i < n; i++) {
		cin >> recipient;
		v.push_back(recipient);
	}
	for (int i = n-1; i >= 0; i--) {
		if (!m[v.at(i)]) {
			cout << v.at(i) << "\n";
			m[v.at(i)] = 1;
		}
	}


	return 0;
}
