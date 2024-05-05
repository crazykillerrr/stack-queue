#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin>>N;
    

    queue<int>que;
    for (int i=0;i<N;i++) {
        string perintah;
        cin>>perintah;
        if (perintah == "push") {
            int N;
            cin>>N;
            que.push(N);
        } else if (perintah == "pop" && !que.empty()) {
            que.pop();
        }
        if (!que.empty()) {
            queue<int> show = que;
            while (!show.empty()) {
                cout<<show.front() << " ";
                show.pop();
            }
            cout<<endl;
        }
    }
    return 0;
}