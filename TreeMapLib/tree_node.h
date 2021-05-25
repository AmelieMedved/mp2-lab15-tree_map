#pragma once

#include "node.h"
#include "tree_map_iter.h"

template <class TK, class TV>
class TTreeNode : public TNode<TK, TV>
{
protected:

public:
  TTreeNode* l;
  TTreeNode* r;

  TTreeNode(TK k = 0, TV v = 0);
  TTreeNode(const TTreeNode& p);

  friend class TTreeMapIter<TK, TV>;
};

template<class TK, class TV>
TTreeNode<TK, TV>::TTreeNode(TK k, TV v) :TNode<TK, TV>::TNode(k, v)
{
  this->l = nullptr;
  this->r = nullptr;
}

template<class TK, class TV>
TTreeNode<TK, TV>::TTreeNode(const TTreeNode& p) :TNode<TK, TV>::TNode(p) 
{
  this->l = nullptr;
  this->r = nullptr;
}
