#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlsttravesal(struct Node *head)
{
    struct Node *ptr = head;
    //   printf("element is %d\n  ", ptr->data);
    //    ptr = ptr->next;
    // while (ptr != head)
    // {
    //     printf("element is %d\n", ptr->data);
    //     ptr = ptr->next;
    // }
    do
    {
        printf("element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    return head;
}
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;

    } // at this point p points to the last nodeof this circular linked list
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
};
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Linked first and second node
    head->data = 4;
    head->next = second;

    // Linked second and third node
    second->data = 3;
    second->next = third;

    // Linked third and fourth node
    third->data = 6;
    third->next = fourth;

    // Linked fourth and first node
    fourth->data = 1;
    fourth->next = head;
    printf("Linked list before insertion ");
    linkedlsttravesal(head);
    head = insertAtFirst(head, 80);
    head = insertAtFirst(head, 50);
    head = insertAtFirst(head, 10);

    printf("Linked list after insertion \n");
    linkedlsttravesal(head);
    return 0;
}
