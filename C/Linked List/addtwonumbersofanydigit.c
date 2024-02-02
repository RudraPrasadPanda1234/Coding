#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <ctype.h>
struct node
{
    int data;
    struct node *next;
};
void insert(struct node **p, int num)
{
    struct node *temp;
    if (*p == NULL)
    {
        (*p) = (struct node *)malloc(sizeof(struct node));
        (*p)->next = NULL;
        (*p)->data = num;
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->next = (*p);
        (*p) = temp;
        (*p)->data = num;
    }
}
void add_in(struct node *a, struct node *b, struct node **c)
{
    struct node *t;
    int d, carry;
    carry = 0;
    while (a != NULL && b != NULL)
    {
        d = (a->data + b->data + carry) % 10;
        insert(c, d);
        if ((a->data + b->data + carry) >= 10)
        {
            carry = 1;
        }
        else
            carry = 0;
        a = a->next;
        b = b->next;
        if ((a == NULL && b == NULL) && (carry == 1))
            insert(c, carry);
    }
    if (a == NULL && b == NULL)
    {
        return;
    }
    else
    {
        if (a != NULL && b == NULL)
        {
            t = a;
        }
        else
        {
            t = b;
        }
        while (t != NULL)
        {
            d = (carry + t->data) % 10;
            if ((carry + t->data) >= 10)
                carry = 1;
            else
                carry = 0;
            insert(c, d);
            t = t->next;
        }
        if (carry == 1)
            insert(c, carry);
    }
}
void numin(struct node **p)
{
    char c = 'c';
    *p = NULL;
    while (c != 'n')
    {
        c = getch();
        if (!isdigit(c))
            return;
        else
        {
            putch(c);
            insert(p, c - '0');
        }
    }
}
void disp(struct node *p)
{
    if (p == NULL)
        return;
    else
    {
        printf("%d", p->data);
        disp(p->next);
    }
}
void main()
{
    struct node *a, *b, *c;
    a = b = c = NULL;
    printf("\nEnter the first number....: ");
    numin(&a);
    printf("\nEnter the second number....: ");
    numin(&b);
    printf("\nThe added result is...: ");
    add_in(a, b, &c);
    disp(c);
    getch();
}