#include <stdlib.h>
#include <locale.h>

struct list {
    int inf;
    struct list *next;
};

struct list *addEnd(struct list *head, int val) {
    struct list *T = (struct list *)malloc(sizeof(struct list));
    T->inf = val;
    T->next = NULL;
    if (head == NULL)
        return T;
    struct list *P = head;
    while (P->next != NULL)
        P = P->next;
    P->next = T;
    return head;
}

struct list *sortList(struct list *head) {
    int swapped = 1;
    struct list *prev, *cur, *tmp;

    while (swapped) {
        swapped = 0;
        prev = NULL;
        cur = head;

        while (cur != NULL && cur->next != NULL) {
            if (cur->inf > cur->next->inf) {
                tmp = cur->next;
                cur->next = tmp->next;
                tmp->next = cur;
                if (prev == NULL)
                    head = tmp;
                else
                    prev->next = tmp;
                prev = tmp;
                swapped = 1;
            } else {
                prev = cur;
                cur = cur->next;
            }
        }
    }
    return head;
}

void printList(struct list *head) {
    struct list *T = head;
    while (T != NULL) {
        if (T != head)
            printf(" ");
        printf("%d", T->inf);
        T = T->next;
    }
    printf("\n");
}

void freeList(struct list *head) {
    struct list *tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main() {
    struct list *head = NULL;
    int val;
    char c;
    setlocale(0,"");
    while (scanf("%d%c", &val, &c) == 2) {
        head = addEnd(head, val);
        if (c == '.')
            break;
    }

    if (head == NULL) {
        printf("NULL\n");
        return 0;
    }

    head = sortList(head);
    printList(head);
    freeList(head);

    return 0;
}