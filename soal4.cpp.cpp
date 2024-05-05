#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N;
    cin>>N;
    stack<int> st;
    for (int i=0;i<N;i++){
        string perintah;
        cin>>perintah;
        if (perintah == "push"){
            int N;
            cin>>N;
            st.push(N);
        } else if (perintah == "pop" && !st.empty()){
            st.pop();
        }
        if (!st.empty()){
            stack<int> show = st;
            while (!show.empty()){
                cout<<show.top()<<" ";
                show.pop();
            }
            cout<<endl;
        }
    }
    return 0;
}
