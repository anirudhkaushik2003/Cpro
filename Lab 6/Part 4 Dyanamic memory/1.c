#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct linked
{
    char data[20];
    char *ass;
    struct linked *next;
};

struct linked *start = NULL;

void insert(char *dat)
{
    struct linked *node, *cur, *prev;
    node = (struct linked *)malloc(sizeof(struct linked));
    node->ass = dat;
    strcpy(node->data,node->ass);
    node->next = NULL;
    for (cur = start, prev = NULL; cur != NULL && strcmp(dat,cur->data) > 0; prev = cur, cur = cur->next)
        ;
    if (prev == NULL)
        start = node;
    else
        prev->next = node;
    node->next = cur;
}

void print()
{
    struct linked *p;
    printf("List:\n");
    for (p = start; p != NULL; p = p->next)
    {
        printf("%s\n", p->data);
    }
    printf("\n");
}

int main()
{
    char c;
    char data[20];
    char *ass;
    do
    {
        printf("Enter Data:\n");
        scanf("%s", &data[0]);
        char *ass = data;
        insert(ass);
        print();
        printf("Do you want to continue(y/n)\n");
        getchar();
        scanf("%c", &c);
    } while (c == 'y');
}