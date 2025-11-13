//  reprsentation of graph in 2d matrix 
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
int main() {
    // Write C++ code here
    int n,m ;
    cin>>n;
    cin>>m;
    adj[n+1][m+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }

    return 0;
}