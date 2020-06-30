import java.util.Scanner;

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class LinkedList {
    public static Node insert(Node head, int data) {
        Node new_node = new Node(data);

        if (head == null) {
            return new Node(data);
        }

        new_node.next = null;

        Node last = head;
        while (last.next != null) {
            last = last.next;
        }
        last.next = new_node;
        return head;
    }

    public static void display(Node head) {
        Node start = head;
        while (start != null) {
            System.out.println(start.data + " ");
            start = start.next;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Node head = null;
        System.out.println("Enter the no of data to be inserted : ");
        int N = sc.nextInt();

        while (N-- > 0) {
            System.out.println("Enter No: ");
            int ele = sc.nextInt();
            head = insert(head, ele);
        }
        display(head);
        sc.close();
    }
}
