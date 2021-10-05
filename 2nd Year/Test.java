import java.util.*;

class Node {
    int data;
    Node next = null;
    
    public void setValue(int val) {
        data = val;
    }
    public int getValue() {
        return data;
    }
}

class Test {
    public static void main(String []args) {
        Scanner sc = new Scanner(System.in);

        Node head = new Node();
        System.out.println("enter node value");
        int val = sc.nextInt();
        head.setValue(val);
        System.out.println(head);
        System.out.println(head.getValue());

        Node n = new Node();
        System.out.println("enter node value");
        val = sc.nextInt();
        n.setValue(val);
        System.out.println(n);
        System.out.println(n.getValue());
        
        head.next = n;

        Node n1 = head;
        
        while (n1 != null) {
            System.out.println(n1.data);
            n1 = n1.next;
        }
    }
}