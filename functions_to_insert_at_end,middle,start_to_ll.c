void insert_at_beginning(node **head, int value)
{
    node *new_node = get_node(value);
    new_node->next = *head;
    *head = new_node;
}

void insert_at_middle(node *head, int value, int position)
{
    node *temp = head;
    int i = 1;
    while(i < position && temp != NULL) {
        temp = temp->next;
        i++;
    }
    if(temp == NULL) {
        printf("Position not found\n");
        return;
    }
    node *new_node = get_node(value);
    new_node->next = temp->next;
    temp->next = new_node;
}

void insert_at_end(node *head, int value)
{
    node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    node *new_node = get_node(value);
    temp->next = new_node;
}
