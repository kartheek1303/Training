void reverse(node **head)
{
    node *prev = NULL;
    node *curr = *head;
    node *next;
    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}
