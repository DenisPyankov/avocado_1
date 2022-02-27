#include <iostream>
#include <string>
using namespace std;

struct Student {
	int age;
	string name;
	string drink;
};

int main()
{

	cout << "number of students" << endl;
	int x;
	cin >> x;
	Student*s = new Student[x];

	for (int i = 0; i < x; i++) {
		cout << "age ";
		cin >> s[i].age;
		cout << "name ";
		cin.get();
		getline(cin, s[i].name);
		cout << "drink ";
		cin.get();
		getline(cin, s[i].drink);
	}

	for (int i = 0; i < x; i++) {
		cout << s[i].name << endl;
		cout << s[i].age << endl;
		cout << s[i].drink << endl;
		cout << endl;
	}

}
