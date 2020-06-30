class DeleteKey{
    Node head = null;
    class Node{
        private int data;
        private Node next;
            Node(int data){
                this.data = data;
                this.next = null;
            }
        }
    public void delete(int data){
        if(head == null){
            System.out.println("Oops! Linked list not found!");
            return;
        }
        Node temp = head, prev = null;
        if( temp != null && temp.data == data ){
            head = temp.next;
            return;
        }

        while(temp != null && temp.data != data){
            prev = temp;
            temp = temp.next;
        }

        if(temp == null)
            System.out.println("Sorry Data not found!");

        prev.next = temp.next;

    }
    public void push(int data){
        Node new_node = new Node(data);

        new_node.next = head;
        head = new_node;

    }
    public void append(int data){
        if(head == null){
            head = new Node(data);
            return;
        }
        Node new_node = new Node(data);
        new_node.next = null;
        Node temp = head;
            while(temp.next != null){
                temp = temp.next;
            }
        temp.next = new_node;
        return;
    }
    public void print(){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }

    public static void main(String[] args){
        DeleteKey list = new DeleteKey();
        list.append(1);
        list.append(4);
        list.append(5);
        list.append(6);

        System.out.println("\nCreated linked list : ");
        list.print();

        list.delete(5);

        System.out.println("\nList after deleting node : ");
        list.print();
    }
}
