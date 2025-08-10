struct SegTree {
    int n;
    vector<ll> tree;
    SegTree(int n) : n(n), tree(4*n) {}
    void build(vector<ll> &arr, int idx, int l, int r) {
        if(l == r) {
            tree[idx] = arr[l];
            return;
        }
        int mid = (l+r)/2;
        build(arr, idx*2, l, mid);
        build(arr, idx*2+1, mid+1, r);
        tree[idx] = tree[idx*2] + tree[idx*2+1];
    }
    ll query(int idx, int l, int r, int ql, int qr) {
        if(ql > r || qr < l) return 0;
        if(ql <= l && r <= qr) return tree[idx];
        int mid = (l+r)/2;
        return query(idx*2, l, mid, ql, qr) + query(idx*2+1, mid+1, r, ql, qr);
    }
    void update(int idx, int l, int r, int pos, ll val) {
        if(l == r) {
            tree[idx] = val;
            return;
        }
        int mid = (l+r)/2;
        if(pos <= mid) update(idx*2, l, mid, pos, val);
        else update(idx*2+1, mid+1, r, pos, val);
        tree[idx] = tree[idx*2] + tree[idx*2+1];
    }
};
