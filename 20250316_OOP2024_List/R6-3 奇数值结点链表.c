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

struct ListNode *getodd(struct ListNode **L) {
    struct ListNode *head = NULL, *tail = NULL;
    struct ListNode *p = *L, *prev = NULL;

    while (p != NULL) {
        if (p->data % 2 != 0) {
            struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
            node->data = p->data;
            node->next = NULL;

            if (head == NULL) {
                head = node;
                tail = node;
            } else {
                tail->next = node;
                tail = node;
            }

            if (prev == NULL) {
                *L = p->next;
            } else {
                prev->next = p->next;
            }
        } else {
            prev = p;
        }

        p = p->next;
    }

    return head;
}
