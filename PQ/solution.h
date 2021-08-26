#include<queue>
void printLevelWise(BinaryTreeNode<int> *root) {
    if(root==NULL)
        return;
   queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while(q.size()!=0)
    {
        BinaryTreeNode<int> * front=q.front();
        q.pop();
        if(front==NULL){
            
            cout<<"\n";
        
            
            if(!q.empty())
                q.push(NULL);
        else 
            return;
        }
          
       /* if(front==NULL)
        {
            cout<<endl;
            
            if(q.empty()==0)
            {
                q.push(NULL);
            }
        }*/
        else{
            cout<<front->data<<" ";
        if(front->left!=NULL)
        {
            q.push(front->left);
        }
        if(front->right!=NULL)
        {
            q.push(front->right);
        }
    }
    }
        
    }