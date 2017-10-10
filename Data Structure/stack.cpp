#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<string> v;
    v.push("Hello");
    v.push("World!");
    const int l = v.size();
    cout << v[0] << '\n';
    for(int i=0; i<l; i++){
        cout << v.top() << '\n';
        v.pop();
    }
    return 0;
}
