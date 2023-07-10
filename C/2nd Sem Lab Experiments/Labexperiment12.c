#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        newNode->next = *head;
        *head = newNode;
    }
    printf("Node with data %d inserted at the beginning.\n", data);
}

// Function to delete the first node in the linked list
void deleteFirstNode(struct Node **head)
{
    if (*head == NULL)
    {
        printf("Linked list is already empty.\n");
    }
    else
    {
        struct Node *temp = *head;
        *head = (*head)->next;
        free(temp);
        printf("First node deleted.\n");
    }
}

// Function to display all the nodes in the linked list
void displayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty.\n");
    }
    else
    {
        printf("Linked list nodes: ");
        while (head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
}

int main()
{
    struct Node *head = NULL;

    // Insert nodes at the beginning
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 1);

    // Display all nodes
    displayList(head);

    // Intersection at the beginning
    struct Node *intersectionNode = createNode(5);
    intersectionNode->next = head;
    head = intersectionNode;
    printf("Intersection at the beginning.\n");

    // Display all nodes
    displayList(head);
    // Delete the first node
    deleteFirstNode(&head);

    // Display all nodes
    displayList(head);

    return 0;
}