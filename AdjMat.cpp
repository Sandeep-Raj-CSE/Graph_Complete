#include <bits/stdc++.h>
using namespace std;
int main(){


    /// undirected unweighted graph

    int edge , vertex ;
    cin >> vertex >> edge ;

    // 2d matrix

    // vector <vector<bool>>AdjM(vertex, vector<bool>(vertex,0));

    int u,v,weight ;

    // for(int i = 0; i < edge; i++){

    //     cin >> u >> v ;
    //    // cout << u << " " << v << endl;
        
    //     AdjM[u][v] = 1;
        
    //     AdjM[v][u] = 1;
    // }


    // undirected weight grap
    //  vector <vector<int>>AdjM(vertex, vector<int>(vertex,0));

    //  for(int i = 0; i < edge; i++){

    //     cin >> u >> v >> weight;
    //    // cout << u << " " << v << endl;
        
    //     AdjM[u][v] = weight;
        
    //     AdjM[v][u] = weight;
    // }


    // directed graph
     vector <vector<bool>>AdjM(vertex, vector<bool>(vertex,0));

     for(int i = 0; i < edge; i++){

        cin >> u >> v ;
       // cout << u << " " << v << endl;
        
        AdjM[u][v] = 1;
        
       // AdjM[v][u] = weight;
    }

    for(int i=0; i<edge; i++){
        for(int j=0 ; j<edge; j++){


            cout << AdjM[i][j] << " ";

           //cle cout<<endl;

        }
         cout<<endl;
    }





    
    return 0;
}