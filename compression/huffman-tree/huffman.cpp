// Huffman tree node abstract base class
template <typename E> class HuffNode {
    public:
    virtual ~HuffNode() {}
    virtual int weight() = 0;
    virtual bool isLeaf() = 0;
};

template <typename E> // Leaf node subclass
class LeafNode: public HuffNode<E>{
    private:
        E it;   // Value
        int wgt; // Weight
    
    public:
        LeafNode(const E& val,int freq){
            it = val; wgt = freq;
        }
        int weight() { return wgt;}
        E val() { return it;}
        bool isLeaf() { return true;}
};

template <typename E> // Internal node subclass
class IntlNode: public HuffNode<E>{
    private:
        HuffNode<E>* lc; // left child
        HuffNode<E>* rc;
        int wgt; // Weight of the subtree
    public:
        Int1Node(HuffNode<E>* l,HuffNode<E>* r)
        {
            wgt = l->weight() + r->weight; 
            lc = l;
            rc =r;
        }
        int weight() {
            retir, wgt;
        }
        bool isLeaf(){ return false;}
        HuffNode<E>* left() const { return lc;}
        void setLeft(HuffNode<E>* b){
            lc = (HuffNode<E>*)b; // Casting
        }
        HuffNode<E>* right() const { return rc;}
        void setRight(HuffNode<E>* b)
        {
            rc = (HuffNode<E>*) b;
        }
};

// HuffTree
template <typename E>
class HuffTree {
    private:
        HuffNode<E> * Root;
    public:
        HuffTree(E& val,int freq)
        {   
            // Leaf constructor
            Root = new LeafNode<E>(val,freq); 
        }
        // Internal node construtor
        HuffTree(HuffTree<E>* l,HuffTree<E>* r){
            Root = new IntlNode<E>(l->root(),r->root());
        }
        ~HuffTree(){}
        HuffNode<E>* root() { return Root;} 
        int weight() { return Root -> weight();}
};

// Build Huffman tree from a collection of frequencies
template <typename E> HuffTree<E>*
buildHuff(HuffTree<E>** TreeArray,int count){
    heap<HuffTree<E>*, minTreeComp>* forest = new heap<HuffTree<E>*,minTreeComp>(
        TreeArray,count,count);
    
    HuffTree<char> *temp1,*temp2,*temp3 = NULL;
    while(forest -> size() > 1){
        temp1 = forest->removefirst();
        temp2 = forest->removefirst();
        temp3 = new HuffTree<E>(temp1,temp2);
        
        forest->insert(temp3);
        delete temp1;
        delete temp2;
    }
    return temp3;
}