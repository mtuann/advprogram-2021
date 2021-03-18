#include <iostream>
#include <set>
#include <map>
using namespace std;

void SetExample() {
	set<int, greater<int> > ss;
	for (int i = 0; i < 10; ++i) {
		ss.insert(i);
	}
	
	// ss.erase(value);
	// ss.contains(value);
	// ss.empty();

	cout << ss.count(0) << " " << ss.count(5) << endl;

	cout << ss.count(15) << endl;

	ss.insert(15);
	cout << ss.count(15) << endl;
	ss.insert(15);


	ss.insert(-20);

	
	ss.insert(-40);

	ss.insert(2000);
	ss.insert(2000);
	ss.insert(2000);
	ss.insert(2000);
	ss.insert(2000);

	for (const auto& element : ss) {
		cout << "element: " << element << endl;
	}
	// while (!ss.empty()) {

	// 	int v = *ss.begin();
	// 	ss.erase(ss.begin());

	// 	cout << "Top of the set: " << v << endl;
	
	// }


}


void MapExample() {

	map<int, int> mp; //  (key, value) = (int, int)

	for (int i = (int)1e9; i < (int)1e9 + 10; ++i) {
		mp.insert({i, i - (int)1e9});
	}

	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
		cout << "key: " << it->first << " value: " << it->second << endl;
	}

	for (const auto& [key, value]: mp) {
		// cout << key << " " << value << endl;
		cout << "key: " <<  key << " value: " << value << endl;
	}
	// return;

	cout << mp[(int)1e9 + 1] << endl;

	mp[(int)1e9 + 1] = 20;

	cout << mp[(int)1e9 + 1] << endl;

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
	// map<ifstream, int> mapif;

}


int main() {
	// Associative containers 
	// std::map and std::set

	// unordered_map and unordered_set
	// multimap, multiset (+ unordered siblings) 


	SetExample();
	MapExample();

	return 0;
}