// Check out - https://en.wikipedia.org/wiki/Fibonacci_heap
// Animation - https://www.cs.usfca.edu/~galles/JavascriptVisual/FibonacciHeap.html

#ifndef _FIB_HEAP_H
#define _FIB_HEAP_H

#include <string>
#include <vector>
#include "Record.h"
#include "DBFile.h"

using namespace std;

class FibHeap {
private:

  struct HeapNode {
    string key;
    Record rec;
    DBFile* dbfile;
    int degree; //Number of children
    HeapNode *parent;
    vector<HeapNode*> children;
  };

  vector<vector<HeapNode*>> degree_arr;
  HeapNode* min;
  vector<HeapNode*> roots;
  void updateDegree_arr(HeapNode *hn);
  void findMinAmongRoots();
  void mergeRoots();
  HeapNode* merge2trees(HeapNode* hn1, HeapNode* hn2);

public:

  void insert(string key, Record rec, DBFile* dbfile);
  void extractmin(string& key, Record& rec, DBFile*& dbfile);
};

#endif
