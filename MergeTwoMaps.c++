
#include <iostream>
#include <map>
using namespace std;

int main()
{
    
    map<int, string> map1{ { 10, "Mike" }, { 20, "John" } };
    map<int, string> map2{ { 30, "Alice" }, { 40, "Bob" } };

    
    map1.insert(map2.begin(), map2.end());

    cout << "Concatenated Map:{";
    for (auto pair : map1) {
        cout << "{" << pair.first << ": " << pair.second
             << "}";
    }
    cout << " }" << endl;
    return 0;
}
