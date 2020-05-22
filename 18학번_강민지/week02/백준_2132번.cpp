#include <bits/stdc++.h>

using namespace std;

// 0 : num, 1 : size
array<int, 2> max_link;

class node {
public:
    int num;
    int fruit;
    vector<int> linked_node;

    // Initialize class node
    node(int i, int t) {
        num = i;
        fruit = t;
    }
    void linking_node(const node& B) {
        if(find(linked_node.begin(), linked_node.end(), B.num)==linked_node.end()) {
            linked_node.push_back(B.num);
            if(linked_node.size()>max_link[1]) {
                max_link[0] = num;
                max_link[1] = linked_node.size();
            }
        }
    }
};

// 열매의 수를 저장
vector<node> node_v;
array<bool, 10000> is_visited;
// 0 : first_node, 1 : second_node
array<array<int, 2>, 2> max_fruit = {INT_MAX, 0, INT_MAX, 0};
int root_fruit = 0;

array<int, 2>& max(array<int, 2>& a, array<int, 2>& b) {
    if(a[1]>b[1]||a[1]==b[1]&&a[0]<b[0])
        return a;
    else
        return b;
}

array<int,2> calculate(int cur_node) {
    is_visited[cur_node] = true;

    array<array<int, 2>, 2> cur_max_fruit = {INT_MAX, 0, INT_MAX, 0};
    int cur_total = 0;

    bool is_edge = true;

    for(int i = 0; i < node_v[cur_node].linked_node.size(); ++i) {
        if(is_visited[node_v[cur_node].linked_node[i]]==false) {
            array<int, 2> temp = calculate(node_v[cur_node].linked_node[i]);

            if(max(cur_max_fruit[0], cur_max_fruit[1])==cur_max_fruit[1])
                cur_max_fruit[0] = max(cur_max_fruit[0], temp);
            else
                cur_max_fruit[1] = max(cur_max_fruit[1], temp);
            is_edge = false;
        }
    }
    if(is_edge) {
        array<int, 2> b = {node_v[cur_node].num, node_v[cur_node].fruit};
        return b;
    }
    else {
        if(cur_max_fruit[0][1]==0) {
            cur_max_fruit[0][0] = min(cur_max_fruit[0][0], cur_node);
        }
        if(cur_max_fruit[1][1]==0) {
            cur_max_fruit[1][0] = min(cur_max_fruit[1][0], cur_node);
        }

        cur_max_fruit[0][1] += node_v[cur_node].fruit;
        cur_max_fruit[1][1] += node_v[cur_node].fruit;

        if(cur_max_fruit[0][1]+cur_max_fruit[1][1]-node_v[cur_node].fruit
           > max_fruit[0][1]+max_fruit[1][1]-root_fruit) {
            max_fruit = cur_max_fruit;
            root_fruit = node_v[cur_node].fruit;
        }
        else if(cur_max_fruit[0][1]+cur_max_fruit[1][1]-node_v[cur_node].fruit
                == max_fruit[0][1]+max_fruit[1][1]-root_fruit
                && min(cur_max_fruit[0][0], cur_max_fruit[1][0])<min(max_fruit[0][0], max_fruit[1][0])) {
            max_fruit = cur_max_fruit;
            root_fruit = node_v[cur_node].fruit;
        }
        return max(cur_max_fruit[0], cur_max_fruit[1]);
    }
}

int main(void) {
    int N;
    cin >> N;
    for(int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        class node temp_node(i, temp);
        node_v.push_back(temp_node);
    }
    int A, B;
    for(int i = 0; i < N-1; ++i) {
        cin >> A >> B;
        node_v[A-1].linking_node(node_v[B-1]);
        node_v[B-1].linking_node(node_v[A-1]);
    }

    if(N==1)
        cout << node_v[0].fruit << ' ' << 1 << endl;
    else {
        calculate(max_link[0]);
        cout << max_fruit[0][1]+max_fruit[1][1]-root_fruit << ' ' << min(max_fruit[0][0], max_fruit[1][0])+1 << endl;
    }
    return 0;
}
