#include <stdio.h>

typedef struct
{
    string item;
    Node next;
} Node;

Node add(LinkedList * list, string newItem);
void remove(LinkedList * list, int itemNum);
void display(LinkedList * list);

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

    display();

    free(first);
    free(inStr);
    free(ptr);

    return 0;
}

Node add(LinkedList * list, string newItem)
{
    Node ptr = *head;
    Node newNode = {newItem, '\0'}

    while(ptr.next != '\0')
        ptr = ptr.next;

    ptr.next = newNode;

    return newNode;
}

void remove(LinkedList * list, int itemNum)
{
    Node ptr = *head;
}

void display(LinkedList * list)
{
    Node ptr = *head;

    printf("To Do:\n");
    if(ptr != '\0');
        while(ptr.next != '\0')
        {
            printf("%s\n", ptr.item);
            ptr = ptr.next;
        }
}
