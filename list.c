#include <stdio.h>
#include <stdlib.h>
{
    struct node;
    struct node *link;
};
struct node *create_list(struct node *start);
void display(struct node *start);
void count(struct node *start, int data);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);
struct node *addafter(struct node *start, int data, int item);
struct node *addbefore(struct node *start, int data, int item);
struct node *addatpos(struct node *start, int data, int pos);
struct node *del(struct node *start, int data);
struct node *reverse(struct node *start);
main()
{
    struct node *start = NULL;
    int choice, data, item, pos;
    while (1)
    {
        printf("1..create list\n");
        printf("2..display\n");
        printf("3..count\n");
        printf("4.saerch\n");
        printf("5..ad to empty list\n");
        printf("6..ad at end\n");
        printf("7..add after node\n");
        printf("8..add before node\n");
        printf("9..add at position\n");
        printf("10..delete\n");
        printf("11..reverse\n");
        printf("12..quit\n");
        printf("enter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            start = create_list(start);
            break;
        case 2:
            display(start);
            break;
        case 3:
            count(start);
            break;
        case 4:
            printf("enter the element to be searched");
            scanf("%d", &data);
            search(start, data);
            break;

        case 5:
            printf("enter the element to be insert");
            scanf("%d", &data);
            start = addatbeg(start, data);
            break;
        case 6:
            printf("enter the element to be insert");
            scanf("%d", &data);
            start = addatend(start, data);
            break;
        case 7:
            printf("enter the element to be insert");
            scanf("%d" & data);
            printf("enter the elemen after which to insert :");
            scanf("%d", &item);
            start = addafter(start, data, item);
            break;
        case 8:
            printf("enter the element to be insert:");
            scanf("%d", &data);
            printf("enter the element before will be insert");
            scanf("%d", &item);
            start = addbefore(start, data, item);
            break;
        case 9:
            printf("enter the element to be inserrt:");
            scanf("%d", &data);
            printf("enterth position at which  to be insert:");
            scanf("%d", &pos);
            start = addatpos(start, data, pos);
            break;
        case 10:
            printf("enter element to be deleted");
            scanf("%d", &data);
            start = del(start, data);
            break;
        case 11:
            start = reverse(start);
            break;
        case 12:
            exit(1);
        default:
            printf("wrong choice \n");
        }
    }
}
