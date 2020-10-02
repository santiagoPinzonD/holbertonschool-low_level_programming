#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table.
 * @ht: is the table.
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *dnode, *auxt;

    i = 0;
    for (i = 0; i < ht->size; i++)
    {
        auxt = ht->array[i];
        while (auxt != NULL)
        {
            dnode = auxt;
            auxt = dnode->next;
            free(dnode->key);
            free(dnode->value);
            free(dnode);
        }
    }
    free(ht->array);
    free(ht);
}
