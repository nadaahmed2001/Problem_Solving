#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	map<string,int> database;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (database.count(s)!=0) {//if name exists in database
			cout << s << database[s] << "\n"; //database[s] is the count
			database[s]++;
		}
		else {
			cout << "OK\n";
			database[s] = 1;
		}
	}
	return 0;
}