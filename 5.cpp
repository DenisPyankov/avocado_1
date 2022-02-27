#include <iostream>
#include <string>
using namespace std;

struct Student {
	int win;
	string name;
	string pos;
/*
sc = scissors
st = stone
p = paper
*/
};


int main()
{

	cout << "number of students" << endl;
	int x;
	cin >> x;
	Student* s = new Student[x];

	for (int i = 0; i < x; i++) {
		s[i].win = 0;
		cout << "name ";
		cin >> s[i].name;
		cout << "pos ";
		cin.get();
		getline(cin, s[i].pos);
	}

	for (int i = 0; i < x-1; i++)
		for (int j = i + 1; j < x; j++) {
			if (s[i].pos == "sc") {
				if (s[j].pos == "p")
					s[i].win++;
				continue;
			}
			
			if (s[i].pos == "st") {
				if (s[j].pos == "sc")
					s[i].win++;
				continue;
			}

			if (s[i].pos == "p") {
				if (s[j].pos == "st")
					s[i].win++;
				continue;
			}
		}
	int max = -14;
	for (int i = 0; i < x; i++)
		if (s[i].win > max)
			max = s[i].win;

	cout << max << endl;
	for (int i = 0; i < x; i++)
		if (s[i].win == max)
			cout << s[i].name << endl;
			


}
