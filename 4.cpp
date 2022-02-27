#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct Student {
	int age;
	string name;
	string drink;
	string g;
};

int main()
{

	cout << "number of students" << endl;
	int x;
	cin >> x;
	Student* s = new Student[x];

	vector<string> A;

	for (int i = 0; i < x; i++) {
		
		cout << "age ";
		cin >> s[i].age;
		cout << "name ";
		cin >> s[i].name;
		cout << "drink ";
		cin.get();
		getline(cin, s[i].drink);

		string newn = s[i].name;
		int len = s[i].name.length();
		for (int j = 0; j < len; j++)
			newn[j] = s[i].name[len - j - 1];
		A.push_back(newn);
	}

	sort(A.begin(), A.end());
	cout << "alphabet: " << endl;
	for (int i = 0; i < A.size(); i++)
		cout << A[i] << endl;

}
