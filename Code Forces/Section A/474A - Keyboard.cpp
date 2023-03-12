#include <iostream>
using namespace std;

int main()
{
	char direction;
	string sequence="", answer = "";
	string original = "qwertyuiopasdfghjkl;zxcvbnm,./";

	cin >> direction;
	cin >> sequence;
	for (int i = 0; i < sequence.length(); i++) {
		//for each char sequence[i] get the original one
		for (int j = 0; j < original.length(); j++) {
			if (original[j] == sequence[i]) {
				if (direction == 'R') {
					answer += original[j - 1];
				}
				else {
					answer += original[j +1];
				}
			}
		}
	}
	
	cout<<answer;
	return 0;
}