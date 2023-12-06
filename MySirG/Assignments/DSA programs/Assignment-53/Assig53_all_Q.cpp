                        /////           BinarySearchTree            /////
#include <iostream>
#include <stdio.h>
#define EMPTY_TREE 1
#define DATA_NOT_FOUND 2

using namespace std;

struct node
{
    node *left;
    int item;
    node *right;
};

class BST
{
    private:
        node *root;
        void recursivePreOrder(node *);
        void recursiveInOrder(node *);
        void recursivePostOrder(node *);
        void inOrderCopy(BST&, node*);

    public:
        BST();
        bool isEmpty();
        void insert(int);
        void Delete(int);       // int vo item hoga node ka jo node delete hone wala hai
        node* search(int);

        void preOrder_traversing(node *);
        void inOrder_traversing(node *);
        void postOrder_traversing(node *);
        
        BST(BST &);
        BST& operator=(BST &);

        ~BST();
};

BST::BST()
{
    root = NULL;
}

bool BST::isEmpty()
{
    return (root == NULL);
}

void BST::insert(int data)
{
    node * n = new node;
    node *ptr;              // ptr vo pointer hai BST jo traverse hoga har node me
    n->left = NULL;
    n->item = data;
    n->right = NULL;

    if(isEmpty())
        root = n;
    else
    {
        bool flag = true;
        ptr = root;
        while (flag)
        {
            /*
                    FOR INSERTION:
                0. root == NULL matlab first node insert hoga.
                1. check if data is already present in tree or not if present then break
                2. uske baad check karo ke data uss node k left me jayega ke right me
                3. fir check karo ke uss node k left NULL hai ke nehi aur right hota tho
                    node ka right NULL hai ke nahi
                4. agar NULL hai tho node insert hoga 
                5. agar nahi hai NULL matlab uss node k left me v koi node hode hoga tho
                     point 1, 2, 3, 4 repeat hoga jub tak leaf node tak pahunch naa jao
             */
            if(data == root->item)       
                break;
            if(data < ptr->item)          // left subtree
            {
                if(ptr->left == NULL)
                {
                    ptr->left = n;
                    flag = false;
                }
                else
                ptr = ptr->left;
            }
            else                        // right subtree
            {
                if(ptr->right == NULL)
                {
                    ptr->right = n;
                    flag = false;
                }
                else
                    ptr = ptr->right;
            }
        }
    }
    

}

/* resursion function banana padhega taaki node me traverse kar paye kyuki traversing karne 
    k time(matlab, void BST::preOrder_traversing()) uske argument me root kaise milta uska 
    idea nahi tha hume aur usko private me bana denge taaki security issu naa ho
*/

void BST::recursivePreOrder(node *ROOT)    // ROOT naam ka pointer recursively traverse hoga
{
    if(ROOT)
    {
        cout << ROOT->item << " ";
        recursivePreOrder(ROOT->left);
        recursivePreOrder(ROOT->right);
    }
}

void BST::preOrder_traversing(node *root)
{
    recursivePreOrder(root);
}

void BST::recursiveInOrder(node *ROOT)    // ROOT naam ka pointer recursively traverse hoga
{
    if(ROOT)
    {
        recursiveInOrder(ROOT->left);
        cout << ROOT->item << " ";
        recursiveInOrder(ROOT->right);
    }
}

void BST::inOrder_traversing(node *root)
{
    recursiveInOrder(root);
}

void BST::recursivePostOrder(node *ROOT)    // ROOT naam ka pointer recursively traverse hogaost
{    
    if(ROOT)
    {
        recursivePostOrder(ROOT->left);
        recursivePostOrder(ROOT->right);
        cout << root->item;
    }
}

void BST::postOrder_traversing(node *root)
{
    recursivePostOrder(root);
}

node* BST::search(int data)
{
    node *ptr;
    if(root == NULL)
        return NULL;
    else
    {
        ptr = root;         // ptr also pointing first node
        while(ptr)
        {
            if(ptr->item == data)
            return ptr;

            if(ptr->item > data)
            {
                ptr = ptr->left;
            }
            else
            {
                ptr = ptr->right;
            }
        }
        return NULL;        // if node not found in tree then this line will execute
    }
    
}

void BST::Delete(int data)
{
    node *ptr, *parptr;
    if(root == NULL)
        throw EMPTY_TREE;

    // initializing ptr and parptr to root and NULL respectively    
    ptr = root;
    parptr = NULL;
    
    // searching the node which need to be deleted
    while (ptr)     // this loop for pointing "ptr" and "parptr"
    {
        if(ptr->item == data)
            break;
        if(data < ptr->item)
        {
            /*  ptr ko ek node aage move karne se pahele ussi node ko parent pointer 
                banadunga jo ptr ka parent hoga check diagram in notes */
            parptr = ptr;            
            ptr = ptr->left;
        }    
        else
        {
            parptr = ptr;
            ptr = ptr->right;
        }
    }
    if(ptr == NULL)
        throw DATA_NOT_FOUND;
    
    if(ptr->left == NULL && ptr->right == NULL)     // no child
    {
        if(data < parptr->item)
            parptr->left = NULL;
        else
            parptr->right = NULL;
        delete ptr;
    }
    else if(ptr->left && ptr->right)                // 2 child
    {
        node *parsuc, *suc;
        suc = ptr->right;      // tho successor me, node delete hone wala hai uske right child ko node ko point karega
        parsuc = ptr;           // tho suc ke pahele wala node ptr tha jo parent banega parsuc

        // jo node delete hone wala hai uske right subtree ka just bigger value wala node ko point karega "suc"
        while (suc->left != NULL)
        {
            parsuc = suc;
            suc = suc->left;
        }

        // now every pointer(ptr, parptr, suc, parsuc) is pointing to their respective nodes
        // time to do operation such as replacing and deleting the successor
        ptr->item = suc->item;

        // deletion of successor node
        if(suc == parsuc->left)
            parsuc->left = suc->right;
        else                                // agar suc, parsuc k right me hai jo ke impossible pata nahi sir ne kya padhaya use yt for this
            parsuc->right = suc->right;             // ye line nahi samgha
        
        delete suc;
    }
    else                                           // 1 child
    {
        // have already pointed ptr and parptr to the respective addresses above
        if(ptr == parptr->left)     // parent k left me ptr hai
        {   
            if(ptr->left != NULL)
                parptr->left = ptr->left;
            else
                parptr->left = ptr->right;
        }
        else
        {
            if(ptr->left != NULL)
                parptr->right = ptr->left;
            else
                parptr->right = ptr->left;
        }
    }
     
}

void BST::inOrderCopy(BST &b, node*ptr)     // 1st argument represent new BST and 2nd one is for source BST
{
    // inorder work on LNR --> left node->item Right
    if(ptr)     // copy karane k liye source BST ka ptr traverse hoga tho jub NULL pahunche ga tho ye terminate hoga
    {
        inOrderCopy(b, ptr->left);
        b.insert(ptr->item);            // "b." matlab new bst me insert ho, new bst ko access karne ke liye b.insert lagate hai
        inOrderCopy(b, ptr->right);
    }
}

BST::BST(BST &bst)
{
    //  make current object i.e. root NULL
    root = NULL;
    if(bst.root)
        bst.inOrderCopy(*this , bst.root);      
    /* mai function call kar raha hu gisme maine *this matlab current object ka tree aur
        bst.tree matlab source object ka tree. dono ka root pointer bhej raha hu jo 
        apne apne first node ko point karenge

        uss function definition k under mai cout wala line hota hai usme 
        currentObject.insert() kar dunga gisse source object ka node copy k bahane 
        current object me insert hote jayenge aur iss tarah deep copy hojayega
     */

}

BST& BST::operator=(BST &bst)
{
    while(root)     // yaha node empty karna hoga kyuki ye constructor nahi hai aur agar root = NULL kar du tho memory leak ho jaye ga tho islye pura delete karne k liye loop chalana padha
        Delete(root->item);
    bst.inOrderCopy(*this, bst.root);

    return *this;
}

BST::~BST()
{
    while (root)
    {
        Delete(root->item);
    }
    
}

