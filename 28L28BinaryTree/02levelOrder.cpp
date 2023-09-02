#include <bits/stdc++.h>
using namespace std;

/*
	TC: O(N) no of nodes which traversing , push() and pop(), front()
	operations follows O(1) Time takes
	SC : O(N) Storing the Queue
*/ 

/**

type queue struct{
    items []*TreeNode
}

func (q *queue) push(item *TreeNode){
    q.items=append(q.items, item)
}

func (q *queue) isEmpty() bool{
    return len(q.items)==0
}

func (q *queue) pop() *TreeNode{
    deleted:= q.items[0]
    
    q.items=q.items[1:]
    return deleted
}


func (q *queue) peek() *TreeNode{
    if q.isEmpty(){
        return nil
    }
    
    return q.items[0]
}

func levelOrder(root *TreeNode) [][]int {
    
    if root==nil{
        return nil
    }
    
    myqueue:= &queue{}
    myqueue.push(root)
    myqueue.push(nil)
    
    arr:=make([]int,0)
    result:=[][]int{}

    for !myqueue.isEmpty(){
        
        tmp:= myqueue.pop()
        
        if tmp==nil{
            if len(arr)>0{
            
                result=append(result, arr)
                myqueue.push(nil)
                arr=[]int{}
            }
        }else{
            arr=append(arr, tmp.Val)
            if tmp.Left!=nil{
                myqueue.push(tmp.Left)
            }
            if tmp.Right!=nil{
                myqueue.push(tmp.Right)
            }
        }
    }
    
    return result
    
}
 * 
 */

 

 





 * 
 */

class node
{
public:
	int data;
	node *left;
	node *right;

	// Constructor
	node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
};

void levelOrderPrint(node *root)
{

	if (root == NULL){
		return;
	}
	// creating queue in cpp
	queue<node *> q; // Create the queue in the CPP Program here 

	q.push(root);

	while (!q.empty())
	{

		node *ele = q.front();
		q.pop();
		cout << ele->data << endl;

		if (ele->left)
		{
			q.push(ele->left);
		}

		if (ele->right)
		{
			q.push(ele->right);
		}
	}

	return;
}

int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	node *root = NULL;
	root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);

	levelOrderPrint(root);
	return 0;
}
