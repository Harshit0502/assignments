#include<bits/stdc++.h>
using namespace std;

int linear_search(int n,vector<int>&v ,int target){
        for (int i = 0; i < n; i++){
            if(v[i] == target){
                return i;
            }
        }
        return -1;
}

int main(int argc, char const *argv[]){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    cout<<linear_search(n,v,target);
    return 0;
}
