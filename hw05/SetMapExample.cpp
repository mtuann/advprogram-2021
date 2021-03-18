#include <iostream>
#include <set>
#include <map>

using namespace std;


void SetExample() {
	
	set<int, greater<int> >  ss;

	ss.insert(20);
	ss.insert(50);
	ss.insert(40);

	ss.insert(30);
	ss.insert(30);
	ss.insert(30);


	for (const auto& element: ss) {
		cout << element << endl;
	}
	// for (set<int>::iterator it = ss.begin(); it != ss.end(); ++it) {
	// 	cout << *it << endl;
	// }
	// ss.erase(it) ss.empty()

	while (!ss.empty()) {
		set<int>::iterator it = ss.begin();
		// int value = *ss.begin();
		cout << "Top of set: " << *it << endl;
		ss.erase(ss.begin());
	}
}

void MapExample() {

	map<int, int> mp; // (key, value) 
	// {"A": 1, "AB": 2, "AC": 3}
 
	// mp.insert({key, value}) map[key] = value
	// map[key] // map[key] = new_value

	// int a[10010]; a[10009]

	for (int i = (int)1e9; i < (int)1e9 + 10; ++i) {
		mp.insert({i, i - (int)1e9});
	}

	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
		cout << "key: " << it->first << " value: " << it->second << endl;
	}

	cout << mp[1000000004] << endl;

	map<string, int> map02 = {{"Dung", 500}};

	map02["An"] = 100;
	map02.insert({"Binh", 299});

	cout << map02.count("Cuong") << endl;

	map02["Cuong"] = 600;

	cout << map02.count("Cuong") << endl;

	cout << map02["Cuong"] << endl;

	for (const auto& [key, value]: map02) {
		// cout << key << " " << value << endl;
		cout << "key: " <<  key << " value: " << value << endl;
	}
	

}



int main() {

	// SetExample();
	MapExample();

	return 0;
}