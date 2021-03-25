#include <iostream>
#include <vector>
using namespace std;


// predicate function: nhan vao mot so tham so tra ve (0/ 1)
bool is_even(int i) {
    return (i % 2) == 0;
}

template <typename InputIt, typename funPredicate>
int count_occurrences(InputIt begin, InputIt end, funPredicate pred) {

    int count = 0;
    for (auto iter = begin; iter != end; ++iter) {
        if (pred(*iter)) count += 1;
    }

    return count;
}


template <typename InputIt, typename funPredicate>
int count_less(InputIt begin, InputIt end, funPredicate pred) {

    int count = 0;
    for (auto iter = begin; iter != end; ++iter) {
        if (pred(*iter)) count += 1;
    }

    return count;
}

int main() {

    std::vector<int> v = {1, 2, 3, 4, 5, 6, 8, 12};

    // cout << count_occurrences(v.begin(), v.end(), is_even);

    // Lambda function
    // []: lambda capture

    auto print_int = [](int x) {
        cout << x << endl;
    };

    int limit = 5;

    auto is_less_than = [limit](int x) {
        return (x < limit);
    };

    // cout << count_less(v.begin(), v.end(), is_less_than);

    for_each(v.begin(), v.end(), [](int i)
        {
            std::cout << i << " ";
        });
    cout << endl;

    auto it3 = find_if(v.begin(), v.end(), [](int i) 
    {
       return i % 3 == 2; 
    });
    cout << *it3 << endl;

    int count_5 = count_if(v.begin(), v.end(), [](int a)
    {
        return (a >= 5);
    });

    cout << count_5 << endl;

    sort(v.begin(), v.end(), [](const int& a, const int& b) -> bool
    {
        return a > b;
    });

    for_each(v.begin(), v.end(), [](int i)
    {
        std::cout << i << " ";
    });
    cout << endl;


        // cout << std::find(v.begin(), v.end(), [](int i) {
    //      return i % 3 == 2;
    //  }) << endl;
//  auto it3 = std::find(v.begin(), v.end(), [](int i) {
// return (*i) % 3 == 2; });
//  cout << *it3 << endl;
    // cout << is_less_than(3) << endl;
    // cout << is_less_than(7) << endl;
    
    return 0;
}