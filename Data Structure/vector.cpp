#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> v;
    v.push_back("Hello");
    v.push_back("World!");
    const int l = v.size();
    for(int i=0; i<l; i++){
        cout << v[i] << '\n';
        //cout << v.back() << '\n';
    }
    return 0;
}
