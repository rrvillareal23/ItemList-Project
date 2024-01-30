#include<stdio.h>
#include"ItemList.h"

void ItemListInit(ItemList *pItemList){
  pItemList->itemCount = 0;
}

int ItemListAddItem(ItemList *pItemList, int itemNumber){
  if(pItemList->itemCount < MAX_ITEM_LIST){
    pItemList->items[pItemList->itemCount++] = itemNumber;
  }
  return pItemList->itemCount;
}

int ItemListRemoveItem(ItemList *pItemList, int itemNumber){
  int i;
  int index = -1;

  for(i = 0; i < sizeof(pItemList); i++){
    if(pItemList->items[i] == itemNumber)
    {
      index = i;
      break;
    }
  }

  if(index != -1){
    //shift all the element from index+1 by one position to the left
    for(i = index; i < sizeof(pItemList) - 1; i++){
      pItemList->items[i] = pItemList->items[i+1];
    }
  }
  return sizeof(pItemList);
}

bool ItemListHasItem(ItemList *pItemList, int itemNumber){
  for(int i = 0; i < pItemList->itemCount; i++){
    if (pItemList->items[i] == itemNumber){
      return true;
    }
  }
  return false;
  
}