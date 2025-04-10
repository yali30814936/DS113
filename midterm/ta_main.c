#define main student_main
#include "student_submission.c"
#undef main

void ta_append(int element) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = element;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int main() {
    int n, x, y;
    char op[3];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", op);
        if (op[0] == 'p') {
            scanf("%d", &x);
            push_Back(x);
        }
		else if (op[0] == 'a') {
			scanf("%d", &x);
			ta_append(x);
		}
        else if (op[0] == 'u') {
            scanf("%d %d", &x, &y);
            update(x, y);
        }
        else if (op[0] == 'd') {
            scanf("%d", &x);
            delete_at_position(x);
        }
        else if (op[0] == 's') {
            sort();
        }
        else if (op[0] == 'm') {
            printf("Middle element: %d\n", get_middle());
        }
    }

    print_List();
	return 0;
}