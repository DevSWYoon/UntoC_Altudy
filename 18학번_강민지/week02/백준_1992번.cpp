#include <bits/stdc++.h>

using namespace std;

int n;

deque<char> out_result;

vector<vector<int>> input(void){
    cin >> n;
    int x;
    vector<int> temp;
    vector<vector<int>> return_table;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            scanf("%1d", &x);
            temp.push_back(x);
        }
        return_table.push_back(temp);
        temp.clear();
    }
    return return_table;
}

int compare(int x, int y, vector<vector<int>>& table, int n){
    int state = table[x][y];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j) {
            if(state!=table[i+x][j+y])
                return 2;
        }
    }
    return state;
}

void calculate(int x, int y, vector<vector<int>>& table, int n) {
    int state = compare(x, y, table, n);
    if(state!=2) {
        out_result.push_back(state+'0');
        return;
    }
    else {
        out_result.push_back('(');
        calculate(x, y, table, n/2);
        calculate(x, y+n/2, table, n/2);
        calculate(x+n/2, y, table, n/2);
        calculate(x+n/2, y+n/2, table, n/2);
        out_result.push_back(')');
    }
}

int main(void) {
    vector<vector<int>> table;
    table = input();
    calculate(0, 0, table, n);
    for(auto s : out_result)
        cout << s;
    cout << endl;
    return 0;
}
