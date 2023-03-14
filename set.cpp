#include <iostream>
#include <set>

using namespace std;

void print_set(set<int> s) {
    for (auto num: s)
        cout << num << " ";
    cout << endl;
}

int main()
{
    set<int> s1;

    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
    cout << "size is now: " << s1.size() << endl;
    // only one 50 can exist in the set
    s1.insert(50);
    s1.insert(10);
    cout << "after inserting 50 and 10, size is now: " << s1.size() << endl;

    // printing set s1
    cout << "\nThe set s1 is : \n";
    print_set(s1);

    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());

    // remove all elements up to 30 in s2
    cout << "\ns2 after removal of elements less than 30:\n";
    s2.erase(s2.begin(), s2.find(30));
    print_set(s2);

    // remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed\n";
    print_set(s2);

    // lower bound and upper bound for set s1
    cout << "\ns1.lower_bound(30) : \n" 
        << *s1.lower_bound(30) << endl;
    cout << "s1.upper_bound(30) : \n"
        << *s1.upper_bound(30) << endl;

    return 0;
}
