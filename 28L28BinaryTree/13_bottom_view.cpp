/*

- if node for a particular, hz distance is not present, add to the map 
- present, add to the maps 
- if current level is greater than the existing level 
- I will update the 
  - Basically update the horizontal distance values in hashmaps
  a. m[hd].second = curr; 
  b. m[hd].first = root->data;

- printBottomViewUtil(root->left, curr + 1, hd - 1, m); 
- printBottomViewUtil(root->right, curr + 1, hd + 1, m); 


inputs : 4 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 8 -1 9 -1 -1 -1 -1
outputs : 
4
2
1 5 6
3 8 
7
9

When the level is greater than the high propabability we are gone see the bottom most items 


void top_view(node *root, map<int,pair<int,int>> &m, int dist, int level) {
    if (node == NULL) return;


    if (m.count(dist) == 0 || m[dist].second > level) {
        m[dist] = make_pair(node->val, level); 
    }

    bottom_view(node->left, m, dist-1, level + 1); 
    bottom_view(node->right, m, dist+1, level + 1); 

    return; 
}

NlogN solution: make_pair skew tree hoota hai agar 
*/





#include<iostream>
#include<map>
#include<queue> 
#include<vector> 
using namespace std; 


class node {
    
    public : 

        int data; 
        node *left; 
        node *right; 

        node(int data) {
            this->data = data; 
            left = NULL; 
            right = NULL; 
        }
};


node * levelOrderInput() {

    // Create Queue to store the left and the right childrens 
    int data; cin >> data; 

    queue<node *> q; 
    node *root = new node(data); 
    q.push(root); 

    while(!q.empty()) {

        node *f = q.front(); 
        q.pop(); 

        int c1, c2; cin >> c1 >> c2; 
        
        if(c1 != -1) {
            f->left = new node(c1);
            q.push(f->left);
        }

        if(c2 != -1) {
            f->right = new node(c2);
            q.push(f->right); 
        }
    }
    return root; 
}


// print the tree using the bfs approaches 
void printTree(node *root) {

    if (root == NULL) {
        return ; 
    }   

    cout << root->data << " "; 
    printTree(root->left);
    printTree(root->right); 

    return;
}


void helperVerticalOrder(node *root, int hd, map<int, vector<int>> &m) {

    // Base Case 
    if (root == NULL) {
        return; 
    }   

    // Assign the root value in the hashmaps 
    m[hd].push_back(root->data); 

    // Call on the left subtrees 
    helperVerticalOrder(root->left, hd - 1, m); 

    // Call on the right subtree 
    helperVerticalOrder(root->right, hd + 1, m); 
    
    return; 
}

// Vertical order print store the result in the hashmaps 
void verticalOrder(node *root) {

    // Create the hashmaps 
    map<int, vector<int>> m; 

    // hd is the horizontal distances from the root to the current nodes 
    helperVerticalOrder(root, 0, m);    
    vector<vector<int>> v;
    // Print the value of the hashmaps 
    for(auto p : m) {
        vector<int> temp; 
        for(int x : p.second) {
            temp.push_back(x);
        }
        v.push_back(temp); 
    }

    // iterate over the vectors 
    for (int i = 0; i < v.size(); i++) {
        int n = v[i].size(); 
        cout << v[i][n - 1] << " ";
    }


    return; 
}   




int main() {


    node *root = levelOrderInput();

    // cout << root->left->data; 
    verticalOrder(root);

    return 0; 
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



// TreeBottomView.cpp
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node*left,*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
node* buildTree(){
		queue<node*>q;
		int d;cin>>d;
		node* root=new node(d);
		q.push(root);
		while(!q.empty()){
			node*temp=q.front();
			q.pop();
			int rc,lc;
			cin>>rc>>lc;
			if(rc!=-1){
				temp->left=new node(rc);
				q.push(temp->left);
			}
			if(lc!=-1){
				temp->right=new node(lc);
				q.push(temp->right);
			}

		}
		return root;
}
void helper(node*rt,map<int,pair<int,int>>&hashmap,int level,int hd){
	if(rt==NULL)return;
	if(hashmap.find(hd)==hashmap.end()) // if iterator is pointing the last if means not present 
		hashmap.insert({hd,{rt->data,level}}); // insert the hashmaps 
	else{
		pair<int ,int >p=hashmap[hd];
		if(level>=p.second){
			hashmap[hd]={rt->data,level};
		}
		
	}
	helper(rt->left,hashmap,level+1,hd-1);
	helper(rt->right,hashmap,level+1,hd+1);
}
void TreeBottomView(node*rt){
	map<int,pair<int,int>>hashmap;
	helper(rt,hashmap,0,0);
	for(auto it:hashmap){
		cout<<it.second.first<<" ";
	}
	cout<<endl;

}
int main(){
	node*root=NULL;
	root=buildTree();
	TreeBottomView(root);
	return 0;
}