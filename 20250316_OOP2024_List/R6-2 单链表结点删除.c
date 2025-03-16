struct ListNode *readlist() {
    struct ListNode *head = NULL, *tail = NULL;
    int data;

    while (1) {
        scanf("%d", &data);
        if (data == -1) break;

        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->data = data;
        node->next = NULL;

        if (head == NULL) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    return head;
}

struct ListNode *deletem(struct ListNode *L, int m) {
    struct ListNode *head = NULL, *tail = NULL;

    while (L != NULL) {
        if (L->data != m) {
            struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
            node->data = L->data;
            node->next = NULL;

            if (head == NULL) {
                head = node;
                tail = node;
            } else {
                tail->next = node;
                tail = node;
            }
        }

        L = L->next;
    }

    return head;
}
