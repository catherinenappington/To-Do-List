#include <stdio.h>

typedef struct
{
    string item;
    Node next;
} Node;

int main()
{
    Node first = malloc(sizeof(Node));
    string * inStr = malloc(sizeof(string));
    Node * ptr = malloc(sizeof(Node));
    ptr = *head;

    printf("To Do List\nWhat needs to be done?\nPress enter after each entry. Press \"0\" when you are done.");

    scanf("%s", inStr);
    while(inStr != '0')
    {
        ptr.item = inStr;
        ptr.next = malloc(sizeof(Node));
        scanf("%s", inStr);
    }
    ptr.next = '\0'; //do I need this or will it already be null by default?

    //display list

    //free every node that comes after first
    free(first);
    free(inStr);
    free(ptr);

    return 0;
}
