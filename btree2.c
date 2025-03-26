#include<stdio.h>
#include<malloc.h>
#include"btree2.h"


void main()
{
    struct node *root=NULL;

    struct node * create();
    struct node * insert();
    void inorder();
    void preorder();
    void postorder();

    int n,ch,q=0;
    do
    {
        printf("\n1.Create\n2.Search\n3.Preorder\n4.Exit");
        printf("\nEnter your choice");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:root=create(root);
            break;
        case 2:printf("\nEnter the element to search");
               scanf("%d",&n);
               if (search(root,n))
               {
                 printf("\nElement found");
               }
               else
               printf("Element not found");
               break;
        case 3:preorder(root);
            break;
        case 4:q=1;
            break;
        }
    } while (q==0);
}

