#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	map<int, int>frontMap;//the number and its count
	map<int, int>backMap;

	for (int i = 0; i < n; i++) {
		int front, back;
		cin >> front >> back;
		frontMap[front]++; //to keep the count of each card number
		if(front!=back)
			backMap[back]++;
	}
	int middle = (n + 1) / 2;
	//if already condition (funny) is satisfied
	for (auto m : frontMap) {
		if (m.second >= middle) {
			cout << 0;
			return 0;
		}
	}
	int min_count = 1e9;
	for (auto m : frontMap) {
		int count = middle - m.second; //number of cards needed to turn to achive the condition
		if (count <= backMap[m.first]) { //if we have enough backcards to turn to satisfy the condition
			min_count = min(min_count, count);
		}
	}
	for (auto m : backMap)
	{
		if (m.second >= middle)
		{
			min_count = min(min_count, middle); break;
		}
	}

	if (min_count == 1e9) {
		cout << -1 << "\n";

	}
	else cout << min_count<<"\n";

	
	return 0;
}
