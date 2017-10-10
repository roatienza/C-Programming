#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> v;
    v.push_back(5);
    v.push_back(10);
    const int l = v.size();
    for(int i=0; i<l; i++){
        cout << v.back() << '\n';
        v.pop_back();
    }
    return 0;
}
