#include <iostream>

using namespace std;

namespace Foo {
    class Bar {
        // Class code here.
        public:
        void printFunction() {
            // Function code here.
            cout << "Call print function from Bar class" << endl;
        }
    };

    class Bar2 {
        // Class code here.
        public:
        void printFunction() {
            // Function code here.
            cout << "Call print function from Bar2 class" << endl;
        }
    };
}

int main(){
    
    Foo::Bar test = Foo::Bar();
    test.printFunction();

    Foo::Bar2 test2 = Foo::Bar2();
    test2.printFunction();
    
    return 0;
}