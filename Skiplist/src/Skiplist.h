#include <stdio.h>
#define MAX_HEIGHT 5 (varaibile da testare con altri valori)




typedef struct SkipList list;
typedef struct Node node;

int randomLevel();
float rando();
void createList();
struct node createNode(*void, int);
void insertSkipList(SkipList, void);
struct Node searchSkipList(SkipList, Node);