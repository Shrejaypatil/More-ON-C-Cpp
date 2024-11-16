#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void createNode(struct Node* n, int d)
{
    n->data = d;
    n->next = NULL;
}

/*
insertion
deletion

*/

void insertAtHead(struct Node **head, int data)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    createNode(temp, data);

    temp->next = *head;
    *head = temp;
}

void insertAtPos(struct Node **head, int data, int pos)
{
    if (pos == 1)
    {
        insertAtHead(head, data);
    }
    else
    {
        int cnt = 0;
        struct Node *curr = (struct Node*)malloc(sizeof(struct Node));
        curr = *head;

        while (cnt < pos - 1)
        {
            curr = curr->next;
            cnt++;
        }

        struct Node *insertNode = (struct Node*)malloc(sizeof(struct Node));
        createNode(insertNode, data);

        insertNode->next = curr->next;
        curr->next = insertNode;
    }
}

void display(struct Node *head)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp = head;

    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main()
{

    struct Node *root = (struct Node*)malloc(sizeof(struct Node));

    createNode(root,10);

    struct Node *head = (struct Node*)malloc(sizeof(struct Node));

    head = root;

    display(head);

    insertAtHead(&head,20);

    display(head);

    return 0;
}