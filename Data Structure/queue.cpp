#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> v;
    v.push(5);
    v.push(10);
    const int l = v.size();
    for(int i=0; i<l; i++){
        printf("%d\n",v.front());
        v.pop();
    }
    return 0;
}
