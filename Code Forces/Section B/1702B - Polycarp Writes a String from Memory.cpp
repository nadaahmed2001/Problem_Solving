#include <iostream>
#include <set>
using namespace std;

int main()
{
	int t, cntr = 0, days = 0;
	bool special = false;
	string s;
	set<char> memory;
	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> s;
		for (int i = 0; i < s.length(); i++) {

			memory.insert(s[i]);//add letter to memory

			if (memory.size() > 3) {
				days++;
				memory.clear();
				memory.insert(s[i]);
			}

		}
		if (!memory.empty()) days++;
		cout << days << "\n";
		days = 0;
		memory.clear();
	}

	return 0;
}