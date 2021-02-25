#include <iostream>
#include "Num.h"
#include "Foo.h"

using namespace std;

int main() {

	cout << "Happy new year!" << endl;
	cout << "Test Class Num" << "\n";
	Num v;
	cout << "v.num = " << v.getNum() << endl;

	Num b(25);
	cout << "b.num = " << b.getNum() << endl;

	Foo f;
	cout << "f.num.n = " << f.getNumFoo().getNum() << endl;
	
	int n;
	cout << "Nhap gia tri tu ban phim: ";
	cin >> n;

	Num c(n);
	cout << "c.num = " << c.getNum() << endl;

	cout << "Chinh sua" << endl;
	return 0;
}