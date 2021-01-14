#include<iostream>
#include<vector>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
    // 超点数と辺
    int N, M;
    cin >> N >> M;

    // グラフ
    Graph G(N);
    for(int i = 0; i < M; ++i){
        int a, b;
        long long w;
        cin >> a >> b >> w;
        G[a].push_back(b);

        // 無向グラフの場合は以下を追加
        // G[b].push_back(a);
    }
    return 0;
}