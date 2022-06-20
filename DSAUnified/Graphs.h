#ifndef DSAUNIFIED_GRAPHS_H
#define DSAUNIFIED_GRAPHS_H

#include <iostream>
#include <vector>
using namespace std;

class Graph{
    vector<vector<int> > graph;
    vector<bool> vis;
    int n,m;
    public:
    void insert()
    {
        if(graph.size()!=0){
           cout<<"Enter no of vertices in graph:";
           cin>>n;
           cout<<"Enter no of edges in graph:";
           cin>>m; 
           graph.resize(n+1,vector<int>(n+1,0));
           vis.resize(n+1,0);
        }
    }
};
#endif