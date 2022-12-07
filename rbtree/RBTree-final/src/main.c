

#include "rbtree.h"

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


void test_erase_root(const key_t key) {
  rbtree *t = new_rbtree();
  node_t *p = rbtree_insert(t, key);
//   assert(p != NULL);
  assert(t->root == p);
  assert(p->key == key);

  rbtree_erase(t, p);
//#ifdef SENTINEL
  assert(t->root == t->nil);
//#else
  //assert(t->root == NULL);
//#endif

  delete_rbtree(t);
}


int main(void){
    rbtree *t = new_rbtree();
    rbtree_insert(t, 26);
    rbtree_insert(t, 17);
    rbtree_insert(t, 41);
    rbtree_insert(t, 47);
    // rbtree_insert(t, 21); 
    // rbtree_find(t,21);
    // int arr[100] = {0,};
    // rbtree_to_array(t,arr,5);
    test_erase_root(128);
    
    

}