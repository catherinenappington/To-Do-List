#include <stdio.h>
#include <string.h>

typedef struct Node Node;
struct Node
{
    char item[99];
    Node *next;
};

int main()
{
    Node * head;
    char inStr[99];
    int * inNum = malloc(sizeof(int));
    Node * ptr = head;
    Node * temp;
    int i;


    printf("To Do List\nWhat needs to be done?\nPress enter after each entry. Press \"0\" when you are done.");

    fgets(inStr, 99, stdin);
    strcpy(head->item, inStr);
    ptr = ptr->next;
    while(inStr != "0")
    {
        strcpy(ptr->item, inStr);
        ptr = ptr->next;
        fgets(inStr, 99, stdin);
    }
    ptr->next = NULL; //do I need this or will it already be null by default?

    ptr = head;
    for(i = 1; ptr != NULL; i++)
    {
        printf("%d. %s\n", i, ptr->item);
    }

    /*
    Next a loop is needed that will continue until
    the list is empty or the user decided to end
    the program. The user will be able to enter the
    number of a listed item to have it removed.
    There should probably be a way to add more items
    at this point too.
    */
    *inNum = getchar();
    while(*inNum != 0 && head != NULL)
    {
        for(i = 1; ptr != NULL; i++)
        {
            if(i == *inNum)
            {
                temp = ptr;
                ptr = ptr->next;
                free(temp);
            }
            else
                ptr = ptr->next;
        }
        inNum = getchar();
    }

    for(ptr = head; ptr != NULL; ptr = temp)
    {
        temp = ptr->next;
        free(ptr);
    }
    free(head);
    free(ptr);

    return 0;
}
