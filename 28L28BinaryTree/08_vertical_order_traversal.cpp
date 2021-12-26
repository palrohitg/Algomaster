/*
			 1(0)
		   /   \ 
		  2(-1) 3(1) 	
             /   \  
            5(0)  6 (2) 
		   /  \ 
		  7(-1)8(1) 

hz
0 -> 1 5 
-1 -> 2, 7
1 -> 2, 8,
1 -> 6

*/
	
void getVerticalOrder(node *root, int hd, map<int, vector<int>> &m) {
	// Base Case 
	if (root == NULL) {
		return; 
	}

	m[hd].push_back(root->key); 

	getVerticalOrder(root->left, hd-1, m); 
	getVerticalOrder(root->right, hd+1, m); 

	return; 
}


void printVerticalOrder(node *root) {

	// create a map and store vertical orders in map using
	// function getVerticalOrder()

	map <int, vector<int>> m; 
	int hd = 0;

	getVerticalOrder(root, hd, m); 

	// creating a var and traversing the maps 
	map<int, vector<int>> it; 

	for (auto it=m.begin(); it)
}