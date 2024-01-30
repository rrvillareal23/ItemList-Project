#ifndef ItemList_h_
#define ItemList_h_

#include <bootstrap.h>
#define MAX_ITEM_LIST 16

typedef struct{
  int items[MAX_ITEM_LIST];
  int itemCount;
} ItemList;

void ItemListInit(ItemList *pItemList);
int ItemListAddItem(ItemList *pItemList, int itemNumber);
int ItemListRemoveItem(ItemList *pItemList, int itemNumber);
bool ItemListHasItem(ItemList *pItemList, int itemNumber);

#endif