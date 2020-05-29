#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> vec;
int max_length = 1;
int min_temp = INT_MAX;

int main(void) {
    int N, temp;
    cin >> N;
    cin >> temp;
    vec.push_back({temp});
    for(int i = 1; i < N; ++i) {
        cin >> temp;
        int vec_size = vec.size();
        int n = 0;
        for(int j = 0; j < vec_size; ++j) {
            if(vec[j].back() < temp) {
                vector<int> temp_vec(vec[j]);
                temp_vec.push_back(temp);
                if(temp_vec.size()>max_length)
                    max_length = temp_vec.size();
                vec.push_back(temp_vec);
                ++n;
            }
        }
        if(temp<min_temp&&n==0)
            vec.push_back({temp});
    }
    for(int i = 0; i < vec.size(); ++i) {
        for(int j = 0; j < vec[i].size(); ++j)
            cout << vec[i][j] << ' ';
        cout << endl;
    }
    cout << max_length << endl;
}
