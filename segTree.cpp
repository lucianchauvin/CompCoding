#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

class MinSegTree {
    int N;
    std::vector<int> tree;
public:
    MinSegTree(int N) {
        this->N = N;
        tree.resize(N*4);
        std::fill(tree.begin(), tree.end(), INT_MAX);
    }
    
    void set(int i, int x) {
        update(i, x, 0, N-1, 0);
    }
    
    int get(int i) {
        return query(i, i);
    }
    
    int query(int l, int r) { //query [l,r] 
        return queryHelper(l, r, 0, N-1, 0);
    }
    
private:
    void update(int i, int x, int lo, int hi, int node) {
        if (hi < i || lo > i) return;
        if (lo == hi) { tree[node] = x; return; }
        int mid = (lo + hi) / 2;
        update(i, x, lo, mid, 2 * node + 1);
        update(i, x, mid + 1, hi, 2 * node + 2);
        tree[node] = std::min(tree[2 * node + 1], tree[2 * node + 2]);
    }
    
    int queryHelper(int s, int e, int lo, int hi, int node) {
        if (hi < s || lo > e) return INT_MAX;
        if (lo >= s && hi <= e) return tree[node];
        int mid = (lo + hi) / 2;
        return std::min(queryHelper(s, e, lo, mid, 2 * node + 1),
                        queryHelper(s, e, mid + 1, hi, 2 * node + 2));
    }
};


