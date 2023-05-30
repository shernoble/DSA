// sets store unique elements only
// set <data_type> set_name;
// By default, the std::set is sorted in ascending order
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> val; // defining an empty set
    set<int> val2 = {6, 10, 5, 1}; // defining a set with values
	set<char> a;
	a.insert('G');
	a.insert('F');
	a.insert('G');
	for (auto& str : a) {
		cout << str << ' ';
	}
	cout << '\n';
    // prints in descending order
    // greater(int) helps in this
    set<int, greater<int> > s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);
    s1.insert(69);

    for (auto i : s1) {
        cout << i << ' ';
    }
    cout << "\nThe set s1 is : \n";
    set <int,greater<int>> :: iterator itr;
    for ( itr = s1.begin(); itr != s1.end(); itr++) {
        cout << *itr << " ";
    }
    set<int> s2(s1.begin(), s1.end());
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << "\ns2 after removal of elements less than 10 "
            ":\n";
    s2.erase(s2.begin(), s2.find(10));
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
	return 0;
}
