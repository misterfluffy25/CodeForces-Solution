#include<iostream>
#include<array>
#include<vector>

using namespace std;

int main() {

    int n, k, value, count = 0;
    cin >> n >> k;

    vector<int> vec;
    for(int i = 0; i < n; i++) {
        cin >> value;
        vec.emplace_back(value);
    }

    for(int i = 0; i < n; i++){
        if(vec[k - 1] <= vec[i] && vec[i] > 0){
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}