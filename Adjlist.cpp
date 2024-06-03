#include <bits/stdc++.h>
using namespace std;
int main(){

    int vertex , edge;
    cin>>vertex>>edge;

  // This code for unweighted 
    // vector<int>adjlist[vertex];

    // for(int i=0; i<edge; i++){
    //     int x,y;
    //     cin>>x>>y;
    //     adjlist[x].push_back(y);
    //     adjlist[y].push_back(x);
    // }


    // thos code for weighted graph

    vector<pair<int,int>>adjlist[vertex];

    for(int i=0; i<edge;i++){
        int x,y,w;
        cin>>x>>y>>w;
        adjlist[x].push_back({y,w});
        adjlist[y].push_back({x,w});
    }


    for(int i=0; i<vertex; i++){
        cout<<i<<" ";

        for(int j=0; j<adjlist[i].size(); j++){
            cout<<adjlist[i][j].first<<" " << adjlist[i][j].second<<" ";
        }

        cout<<endl;
    }
    
    return 0;
}