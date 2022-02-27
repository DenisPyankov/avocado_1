#include <iostream>
#include <string>
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

	for (int i = 0; i < x; i++) {
		int k = 0;
		cout << "age ";
		cin >> s[i].age;
		for (int j = 2; j <= sqrt(s[i].age); j++)
			if ((s[i].age % j) == 0)
				k++;
		cout << "name ";
		cin.get();
		getline(cin, s[i].name);
		cout << "drink ";
		cin.get();
		getline(cin, s[i].drink);
		if (k == 0) {
			cout << endl;
			cout << "!" << endl;
			cout << s[i].name << endl;
			cout << s[i].drink << endl;
			cout << "!" << endl;
			cout << endl;
		}
	}

}
