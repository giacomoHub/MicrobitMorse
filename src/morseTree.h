// Node class
class Node{
public:
    char letter;
    Node *left;
    Node *right;
    //constructor
    Node(char _letter, Node *_left, Node *_right) : letter(_letter),left(_left),right(_right) {}
};
 
// Binary tree class
class BinaryTree{
private:
    Node *root;
    Node *current_node;
 
public:
    BinaryTree();
    Node* get_current_node();
    char get_current_letter();
    void step_left();
    void step_right();
    void reset();
};
 
Node* BinaryTree::get_current_node(){
    return current_node;
}
 
char BinaryTree::get_current_letter(){
    return current_node->letter;
}
 
void BinaryTree::step_left(){
    current_node = current_node->left;
}
 
void BinaryTree::step_right(){
    current_node = current_node->right;
}
 
void BinaryTree::reset(){
    current_node = root;
}
 
// Deufault constactor initializes a morse code tree
BinaryTree::BinaryTree(){
 
    //layer 5
    Node* under =  new Node('_', NULL, NULL);
    Node* five  =  new Node('5', NULL, NULL);
    Node* four  =  new Node('4', NULL, NULL);
    Node* three =  new Node('3', NULL, NULL);
    Node* two   =  new Node('2', NULL, NULL);
    Node* one   =  new Node('1', NULL, NULL);
    Node* six   =  new Node('6', NULL, NULL);
    Node* equal =  new Node('=', NULL, NULL);
    Node* seven =  new Node('7', NULL, NULL);
    Node* eight =  new Node('8', NULL, NULL);
    Node* nine  =  new Node('9', NULL, NULL);
    Node* zero  =  new Node('0', NULL, NULL);
 
    // Layer 4
    Node* h   =   new Node('H', five ,four );
    Node* v   =   new Node('V', NULL ,three);
    Node* f   =   new Node('F', under,NULL );
    Node* mul =   new Node('*', NULL ,two  );
    Node* l   =   new Node('L', NULL ,NULL );
    Node* div =   new Node('/', NULL ,NULL );
    Node* p   =   new Node('P', NULL ,NULL );
    Node* j   =   new Node('J', NULL ,one  );
    Node* b   =   new Node('B', six  ,equal);
    Node* x   =   new Node('X', NULL ,NULL );
    Node* c   =   new Node('C', NULL ,NULL );
    Node* y   =   new Node('Y', NULL ,NULL );
    Node* z   =   new Node('Z', seven,NULL );
    Node* q   =   new Node('Q', NULL ,NULL );
    Node* add =   new Node('+', eight,NULL );
    Node* sub =   new Node('-', nine, zero );
 
    // Layer 3
    Node* s = new Node('S', h  , v  );
    Node* u = new Node('U', f  , mul);
    Node* r = new Node('R', l  , div);
    Node* w = new Node('W', p  , j  );
    Node* d = new Node('D', b  , x  );
    Node* k = new Node('K', c  , y  );
    Node* g = new Node('G', z  , q  );
    Node* o = new Node('O', add, sub);
 
    // Layer 2
    Node* i = new Node('I', s, u);
    Node* a = new Node('A', r, w);
    Node* n = new Node('N', d, k);
    Node* m = new Node('M', g, o);
 
    // Layer 1
    Node* e = new Node('E', i, a);
    Node* t = new Node('T', n, m);
 
    root = new Node('@', e, t);
    current_node = root;
}