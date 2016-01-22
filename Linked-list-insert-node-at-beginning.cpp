////Declaring head as global variable

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* link;
};
struct Node* head;
void Insert(){
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    int i;
    printf("Enter a number = ");
    scanf("%d",&i);
    temp->data=i;
    temp->link=head;
    head=temp;
}
void Print(){
    struct Node* temp = head;
    while (temp != NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
int main(){
    head = NULL;
    int n;
    printf("How many numbers do you want to insert? ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        Insert();
        Print();
    }
}


//////Passing head in call to function


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void Insert(int i,struct Node** head)
{
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data=i;
    temp->next=*head;
    *head = temp;
}
void Print(struct Node* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
int main()
{
    int i,n,j;
    struct Node* head = NULL;
    printf("How many numbers you want to enter? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a number = ");
        scanf("%d",&j);
        Insert(j,&head);
        Print(head);
    }
}
