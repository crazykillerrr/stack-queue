#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    
    int arr[num];
    for(int i=0; i<num; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<num; i++){
        if(arr[i]%2 == 1){
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}