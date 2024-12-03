#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};

struct Node *createnode(int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode ->data = data;
    newnode->next = NULL;
    return newnode;
    
}

void appendNode(struct Node ** head, int data) {
    struct Node *newNode = createnode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void display(struct Node *head)
{
    struct Node *temp ;
    temp=head;
    if(temp==NULL)
    {
        printf("List IS Empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

void rev(struct Node *head)
{
    if(head==NULL)
    {
        return;
    }
    rev(head->next);
    printf("%d\t",head->data);
}
int main()
{
    struct Node *head=NULL;
    int data,n;
    printf("Enter Size ");
    scanf("%d",&n);
    for(int i = 0; i<n; i++)
    {
        printf("Enter data:: ");
        scanf("%d",&data);
        appendNode(&head,data);
    }
    display(head);
    printf("Reverse list is \n");
    rev(head);
    return 0;
}