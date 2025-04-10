#define main student_main
#include "midterm.cpp"
#undef main

void ta_append(int element) {
    Node* newNode = new Node(element);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int main() {
    int n, x, y;
    string op;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> op;
        if (op == "p") {
            cin >> x;
            push_Back(x);
        }
		else if (op == "a") {
			cin >> x;
			ta_append(x);
		}
        else if (op == "u") {
            cin >> x >> y;
            update(x, y);
        }
        else if (op == "d") {
            cin >> x;
            delete_at_position(x);
        }
        else if (op == "s") {
            sort();
        }
        else if (op == "m") {
            cout << "Middle element: " << get_middle() << endl;
        }
    }

    print_List();
    return 0;
}