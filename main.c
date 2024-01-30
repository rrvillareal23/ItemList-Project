#include <stdio.h>
#include "ItemList.h"
#include "ItemList.c"

int main()
{
    ItemList itemList;
    int i;

    ItemListInit(&itemList);

    ItemListAddItem(&itemList, 1);
    ItemListAddItem(&itemList, 2);
    ItemListAddItem(&itemList, 3);
    ItemListAddItem(&itemList, 4);
    if( !ItemListHasItem(&itemList, 3))
    {
        printf("TEST FAILED: list does not have item.");
    }
    else
    {
        // remove an item
        ItemListRemoveItem(&itemList, 3);
    
        // Check to make sure the item is gone
        if(ItemListHasItem(&itemList, 3))
        {
            printf("TEST FAILED: itemList still has deleted object in position %d\n", 3);
        }
        else
        {
            // add two items 
            ItemListAddItem(&itemList, 3);
            ItemListAddItem(&itemList, 5);
            for (i = 1; i <= 5; ++i)
            {
                if (!ItemListHasItem(&itemList, i))
                {
                    printf("TEST FAILED: item %d was not found.\n", i);
                    break;
                }
            }
            if (i == 6)
            {
                if( !ItemListHasItem(&itemList, 56))
                {
                    printf("TEST PASSED\n");
                }
                else
                {
                    printf("TEST FAILED: an invalid item was reported as found.\n");
                }

            }
        }
    }
}
