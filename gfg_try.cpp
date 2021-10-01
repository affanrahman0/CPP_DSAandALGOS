// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
bool dfs_cycle(vector<unordered_set<int> >& graph, int node,
			vector<bool>& visited, vector<bool>& dfsvisit)
{
	if(visited[node]) return false;

    visited[node] = dfsvisit[node] = false;
    for(int i: graph[node])

}    
vector<unordered_set<int>> makegraph(int N, vector<pair<int, int> >& pre)
{
    vector<unordered_set<int>> graph(N);
    for(auto i: pre)
    {
        graph[i.second].insert(i.first);
    }

    return graph;
}
public:
	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    vector<unordered_set<int>> graph = makegraph(N,pre);
        vector<bool> visited(N, false), dfsvisit(N, false);
        for(int i=0;i<N;i++)
        {
            if(!visited[i] && dfs_cycle(graph, i, visited,dfsvisit)) return false;
        }

        return true;

	}
    
    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends