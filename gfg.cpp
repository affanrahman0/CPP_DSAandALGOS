// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    int V; // No. of vertices
	list<int> *adj; // Pointer to an array containing adjacency lists
	bool isCyclicUtil(int v, bool visited[], bool *rs); // used by isCyclic()
    
public:
    Solution(int V); // Constructor
    Solution(); // Constructor
	void addEdge(int v, int w); // to add an edge to graph
	bool isCyclic(); // returns true if there is a cycle in this graph
	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    //vector<unordered_set<int> > graph = make_graph(numTasks, prerequisites);
        Solution graph(N);
	    vector<bool> onpath(numTasks, false), visited(numTasks, false);
	    for (int i = 0; i < numTasks; i++)
	    	if (!visited[i] && dfs_cycle(graph, i, onpath, visited))
	    		return false;
	    return true;
	}
};
Solution::Solution(int V)
{
	this->V = V;
	adj = new list<int>[V];
}
void Solution::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

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