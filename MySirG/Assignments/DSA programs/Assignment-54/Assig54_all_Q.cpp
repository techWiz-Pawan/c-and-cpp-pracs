            /////           AVL implementation using Linked list            /////
#include <iostream>
#include <stdio.h>
using namespace std;

struct node
{
    node *left;
    int item;
    node *right;
    int height;
};

class AVL
{
    private:
        node *root;
    
    protected:
    // When a node is deleted/inserted, we need to return the updated root of the AVL tree after the deletion/insertion.
        node* insertion(node*, int);
        node* Deletion(node*, int);
        node* minValueNode(node*);
        void preorderRec(node*);
        void inorderRec(node*);
        void postorderRec(node*);
    
    public:
        AVL();
        int getBalanceFactor(node *);   // isme uss node ka address pass hoga jiska BST hai
        int getHeight(node *);       // ptr->left/ptr->right v ek point hai aage ka tho argument me datatype uss pointer ka node* hoga
        node* leftRotate(node *);    // A node pass hoga 
        node* rightRotate(node *);         // A node pass hoga
        void insert(int);
        void Delete(int);
        void preorder();
        void inorder();
        void postorder();
        node* search(int);

        ~AVL();
};
AVL::AVL()
{
    root = NULL;
}

int AVL::getHeight(node *ptr)       // ye ptr ptr->left ko point kar raha hai ya ptr->right ko 
{
    if(ptr == NULL)  // matlab ptr->left me he NULL hai tho ptr jiss node ko point kar raha hai vo NULL hai tho height zero hoga
        return 0;
    else
    {
        // har node prepare hone time left right item aur height hota hai tho ptr->left ya ptr->right k node me v height hoga tho uss node ka height return kar do
        return ptr->height;
    }
}

int AVL::getBalanceFactor(node *ptr)
{
    if(ptr == NULL)     // tree he empty hai tho height BF = 0 hoga.
        return 0;
    else
    {
        /* getHeight() ka function call karenge aur usme argument "ptr->left" karenge
            tho left subtree ka height batadega aur "ptr->right" karenge tho right subtree
            ka height batayega 
        */
        int BF = getHeight(ptr->left) - getHeight(ptr->right);
        return BF;
    }

}

node* AVL::leftRotate(node *A)
{
    node *B = A->right;     // B, A ka child hota hai tho b me A->right 
    node *LT = B->left;        // yaha par B child right nahi bulki left subtree hoga tho uske liye b k right wale tho automatic rotate ho jata par agar B k left me koi node hai tho ye line refer anuj bhaiya AVL video
    
    // now lets do left rotation
    B->left = A;
    A->right = LT;      // aur agar right child hota tho uko A ke right me insert karte kyuki A se chota tha 

    // Update height kyuki A and B ke position change hui hogi
    /* 
        always update hight from child to anscester here child is A after rotation coz 
        child's child node height wasn't changed because their didn't changed so A can use 
        his child height to update his and then B will use A's height to update his in this 
        case every node will have correct height. 
    */
    A->height = max(getHeight(A->left), getHeight(A->right)) + 1;       // max is buildin function to find maximum
    B->height = max(getHeight(B->left), getHeight(B->right)) + 1;

    /*
        By returning B we ensure that the calling function (most likely an insertion or 
        deletion operation) receives the updated root of the rotated subtree. 
        If the rotated subtree is part of a larger AVL tree, this new root should be 
        correctly connected to the rest of the tree.
    */
   /*   pahele A that B ka parent abb rotate k baad B parent ban jata hai, lekin 
        before rotation A ka koi parent hoga jo A ko connect kiya hoga abb B parent ban 
        gaya hai tho A ka parent ko return ho jayega isliye return B karte hai
   */
   return B;
}

node* AVL::rightRotate(node *A)
{
    node *B = A->left;
    node *RT = B->right;

    // performing right rotation
    B->right = A;
    A->left = RT;

    // updating height
    A->height = max(getHeight(A->left), getHeight(A->right)) + 1;
    B->height = max(getHeight(B->left), getHeight(B->right)) + 1;

    return B;
}

/* 
    The insertion method handles the insertion of nodes into the AVL tree, which is a 
    critical operation for maintaining the tree's balanced property. isliye isse protected 
    me banate hai taki external user isse access na kar paye.

    aur isliye insert function me directly nahi banate hai usse call karte hai giska
    deceleration protected me hai


*/

node* AVL::insertion(node *ptr, int data)
{
    // 1. insertion
    node *n;
    if(ptr == NULL)
    {   
        n = new node;
        n->left = NULL;
        n->item = data;
        n->right = NULL;
        n->height = 1;      // height never start from 0 so its 1.

        return n;       // if tree is empty then n will be first node for insertion so returning that node n
    }
        // when tree is not empty and you are doing insertion
        // insertion will be done recursively kyuki node ptr check karega traverse karke data chota hai ke bada
        if(data < ptr->item)
            ptr->left = insertion(ptr->left, data); // ptr->left me jo v new node insert hoga return hone k baad vo insert ho jaye
        else if(data > ptr->item)
            ptr->right = insertion(ptr->right, data);
        else            // duplicate value no allowed in AVL so we simply return ptr
            return ptr;     // ptr ko return kar denge as it is jaisa tha waisa he rahega

    // 2. update height
        // insertion/deletion me anscestor k height change ho jati hai to update karna hoga
        ptr->height = max(getHeight(ptr->left), getHeight(ptr->right)) + 1;
    
    // 3. check wheather this node become unbalance so get balance factor of ancestor
    // if tree is unbalance mean BF != (1, 0, -1) then we do rotation
    int balance = getBalanceFactor(ptr);       // BF will get returned in balance variable
    
            //  if node become unbalance then there are four case  //
/*************************************(LL, RR, LR, RL)*************************************/
    // left left wala case gisme B ka child v left me hota hai
    if(balance > 1 && getBalanceFactor(ptr->left) >= 0)    // balance > 1 matlab (2 ya usse jada BF ho gaya hoga) ||Balance factor fir se call kiya taaki B k child ka BF pata chal paye ke vo B k left me he hai k nahi
        return rightRotate(ptr);        // yaha par right rotate wala function chalega aur jo v ayega vo return ho jayega jaha se v call hua hoga
    
    // left right wala case
    if(balance > 1 && getBalanceFactor(ptr->left) < 0)  // why not "<= 0" coz less then 0 hoga kyuki B k right me child hoga tavi LR case chalega
    {
        // humne padha tha A B and C tha gisme B&C pahele karte hai fir A&C fir C dono ka parent bun jata tha tho left aur right me right wala pahele hoga (left -> right rotation , right -> left rotation)
        // B matlab (ptr->righr) kyuki B&C wala pahele rotate hoga
        ptr->left = leftRotate(ptr);        // leftRotate kyuki pahele B&C chalega aisa karne se LL bun jayega tho rightRotate() function call karke return kar do
        return rightRotate(ptr);
    }

    // right right wala case
    if(balance < -1 && getBalanceFactor(ptr->right) <= 0)   // ye dono condition right right wala case banega
        return leftRotate(ptr);

    // right left wala case
    if(balance < -1 && getBalanceFactor(ptr->right) > 0)
    {
        ptr->right = rightRotate(ptr->right);    // yaha par v B&C ko pahele rotate karenge aur B matlab (ptr->righr)
            return leftRotate(ptr);
    }
/*****************************************************************************************/

    return ptr;

}

void AVL::insert(int data)
{
    root = insertion(root, data);
}

node* AVL::minValueNode(node *ptr)
{
    node *current = ptr;
    while(current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

node* AVL::Deletion(node *ptr, int data)
{
    if(ptr == NULL)
        return ptr;         // return NULL if tree empty

    // normal deletion like BST will be done then we will check tree is balance or not
    if(data < ptr->item)
        ptr->left = Deletion(ptr->left, data);
    else if(data > ptr->item)
        ptr->right = Deletion(ptr->right, data);
    else    // if data is found which we are searching for deletion then else part will be execute
    {
        //   if (data == ptr->item)   //
        // if that node has no child or one child
        if(ptr->left == NULL || ptr->right == NULL)
        {
            // making a temperory pointer which will be useful when 1 child for pointing that child node
            node *temp; 
            // agar node(jo delete hone wala hai) ka ptr->left NULL hoga tho ptr->right wala ko temp point karega or vice versa
            temp = ptr->left ? ptr->left : ptr->right;      // agar ptr->left and ptr->right dono NULL hoga tho temp me NULL hoga tub hum usse no child bol denge

            // no child case
            if(temp == NULL)
            {
                temp = ptr;     // Deallocate memory for the node
                ptr = NULL;     // Set ptr to null to remove its connection to the AVL tree
            }
            else        // one child case
            {
                // yaha par temp child node hai tho temp node ka data ptr me assign hoga
                *ptr = *temp;   // Copy the contents of the child node to the node to be deleted
                delete temp;    // Deallocate memory for the child node
            }
        }
        else    // two child 
        {
            // we will use inorder successor so we will in node's right subtree 
            node *temp = minValueNode(ptr->right);      // we will use function to find the min value node in right subtree

            ptr->item = temp->item;

            // now delete the inorder successor
            ptr->right = Deletion(ptr->right, temp->item);
        }

    }
    // tree having one node
    if(ptr == NULL)
        return ptr;
    
    ptr->height = max(getHeight(ptr->left), getHeight(ptr->right)) + 1;

    int balance = getBalanceFactor(ptr);

    // now four case for balancing the tree

    // LL
    if(balance > 1 && getBalanceFactor(ptr->left) >= 0)
        return rightRotate(ptr);
    // LR
    if(balance > 1 && getBalanceFactor(ptr->left) < 0)
    {
        ptr->left = leftRotate(ptr->left);
            return rightRotate(ptr);
    }
    // RR
    if(balance < -1 && getBalanceFactor(ptr->left) <= 0)
        return leftRotate(ptr);
    // RL
    if(balance < -1 && getBalanceFactor(ptr->right) > 0)
    {
        ptr->right = rightRotate(ptr->right);
            return leftRotate(ptr);
    }

    return ptr;
}

void AVL::Delete(int data)
{
    root = Deletion(root, data);
}

// traversing
void AVL::preorderRec(node *ptr)
{
    cout << ptr->item << "  ";
    preorderRec(ptr->left);
    preorderRec(ptr->right);
}
void AVL::preorder()
{
    preorderRec(root);
}

void AVL::inorderRec(node *ptr)
{
    inorderRec(ptr->left);
    cout << ptr->item << "  ";
    inorderRec(ptr->right);
}
void AVL::inorder()
{
    inorderRec(root);
}

void AVL::postorderRec(node *ptr)
{
    postorderRec(ptr->left);
    postorderRec(ptr->right);
    cout << ptr->item << "  ";
}
void AVL::postorder()
{
    postorderRec(root);
}

// search element
node* AVL::search(int data)
{   
    node *ptr;
    if(root == NULL)
        return NULL;
    else
    {
        ptr = root;
        if(data == ptr->item)
            return ptr;

        if(data < ptr->item)
            ptr = ptr->left;
        else
            ptr = ptr->right;
    }

    return NULL;        // node not found
     
}


// Destructor
AVL::~AVL()
{
    while(root)
        Delete(root->item);
}