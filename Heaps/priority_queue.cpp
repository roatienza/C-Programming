#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> pq;  // [], empty
    pq.push(5);  // [5]
    pq.push(1);  // [5,1]
    pq.push(12);  // [12,5,1]; note that the highest element gets in front of the queue
    pq.push(-3);  // [12,5,1,-3]
    pq.push(17);  // [17,12,5,1,-3]

    while(!pq.empty()){
        int item = pq.top();  // Does not pop it 
        pq.pop();
        cout << item << " ";
    }
    cout << endl;
    return 0;
}
