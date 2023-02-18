#ifndef _BST_H_
#define _BST_H_
#include <BinaryTree.h>
namespace DSA {
namespace DS {
namespace BINARY_TREE {
namespace BST{

template <typename T>
class BST : public BinaryTree<T> {
    public :
        void Insert(T Data);
        void Delete(T Data);
        void Search(T Data);
        void Destroy();
    private:
        void Helper_Insert(TreeNode_t<T>& pSubTree, T Val) ;
};

}}}} // DSA::DS::BINART_TREE::BST
#endif // _BST_H_