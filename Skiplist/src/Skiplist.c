#include <stdio.h>
#include <time.h>
#include <stdlib.h>



typedef struct SkipList {
  Node *head;
  unsigned int max_level;
  int (*compare)(void*, void*);
};


struct Node {
  unsigned int size;
  Node *next[size];
  void *item;
};


srand((unsigned)time(NULL));  //da mettere nel main 


int rando(){
  return ((float)rand()/(RAND_MAX));
}



int randomLevel(){
  lvl=1;
  while ((float)rando() < 0.5 && lvl < MAX_HEIGHT){
      lvl = lvl + 1;
  }
  return lvl;
}



struct node createNode(*void item, unsigned int size){
  int lev=0;
  node.item=item;
  node.size=size;
  for(lev=0; lev<size; lev++){
    node.next[lev]=NULL;
  }
  return node;
}


void createList(){
  node new = createNode(NULL, MAX_HEIGHT);
  list.head=new;
  list.max_level=1;
}


void insertSkipList(SkipList list, void i){
  int k=0;
  node new = createNode(i, randomLevel());


  if(new.size > list.max_level){
    list.max_level = new.size;
  }

  node x=list.head;
  
  for (k=list.max_level; k>=0; k--){
    if (x.next[k] == NULL || new.item < x.next[k].item){
      if k < new.size {
            new.next[k] = x.next[k];
            x.next[k] = new;
          }
      else
          x = x.next[k];
          k=k++;
      } 
    }        
  }



  struct Node searchSkipList(SkipList list, Node node){
    int i=0;
    node x = list.head;

    // loop invariant: x->item < I
    for (i=list.max_level; i>=0; i--){
      while (x.next[i].item < node.item){
        x = x.next[i];
      }
    }
        

    // x->item < I <= x->next[1]->item
    x = x.next[1]
    if (x.item == node.item){
      return x.item;
    }  
    else
      return failure;
  }