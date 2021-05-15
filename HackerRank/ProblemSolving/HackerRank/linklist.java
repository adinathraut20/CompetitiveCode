import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class SinglyLinkedListNode {
    public int data;
    public SinglyLinkedListNode next;

    public SinglyLinkedListNode(int nodeData) {
        this.data = nodeData;
        this.next = null;
    }
}

class SinglyLinkedList {
    public SinglyLinkedListNode head;
    public SinglyLinkedListNode tail;

    public SinglyLinkedList() {
        this.head = null;
        this.tail = null;
    }

    public void insertNode(int nodeData) {
        SinglyLinkedListNode node = new SinglyLinkedListNode(nodeData);

        if (this.head == null) {
            this.head = node;
        } else {
            this.tail.next = node;
        }

        this.tail = node;
    }
}

class SinglyLinkedListPrintHelper {
    public static void printList(SinglyLinkedListNode node, String sep, BufferedWriter bufferedWriter) throws IOException {
        while (node != null) {
            bufferedWriter.write(String.valueOf(node.data));

            node = node.next;

            if (node != null) {
                bufferedWriter.write(sep);
            }
        }
    }
}

public static SinglyLinkedListNode condense(SinglyLinkedListNode head) {
    // Write your code here
                
            LinkedHashSet<Integer> hSet = new LinkedHashSet<>();
            
            SinglyLinkedListNode temp = head;
            
            while(temp != null){
                hSet.add(temp.data);
                temp = temp.next;
            }
            //hSet.add(temp.data);
            SinglyLinkedList h = new SinglyLinkedList();
            for (Integer i : hSet) {
                h.insertNode(i);
            }
            return h.head;
            
    
    
    
           /* HashSet<Integer> hSet = new HashSet<>();
            
            if(head == null){
                return null;
            }
            else{
                SinglyLinkedListNode temp = head;
                 SinglyLinkedListNode temp1 = head;
                 
                while(temp.next != null){
                    
                    if(hSet.contains(temp.data)){
                           temp1.next = temp.next;
                           temp.next = null;
                           temp = temp1.next;
                                              
                        
                    }
                    else{
                         hSet.add(temp.data);
                         temp1 = temp;
                         temp = temp.next;
                    }
                    
                    
                }
                
                if(hSet.contains(temp.data)){
                           temp1.next =null;
                           temp = null;                          
                        
                }
                
            }
            return head;
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
      /*  if(head == null || head.next == null){
            return head;
        }
        else{
            SinglyLinkedListNode temp = head;
            SinglyLinkedListNode temp1 = temp;
            
            HashSet<Integer> hSet = new HashSet<Integer>();
           // System.out.println(temp.next);
            while(temp.next != null){
                if(hSet.contains(temp.data)){
                    temp1.next = temp.next;
                    temp.next = null;
                    temp = temp1.next;
                    
                }
                else{
                    hSet.add(temp.data);
                    temp1 = temp;
                    temp = temp.next;
                    
                }
                
            }
            if(hSet.contains(temp.data)){
                    temp1.next = null;
                    temp.next = null;
                }
                else{
                    hSet.add(temp.data);
                }
                
        }*/
     //   return head;

    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        SinglyLinkedList head = new SinglyLinkedList();

        int headCount = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, headCount).forEach(i -> {
            try {
                int headItem = Integer.parseInt(bufferedReader.readLine().trim());

                head.insertNode(headItem);
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        SinglyLinkedListNode result = Result.condense(head.head);

        SinglyLinkedListPrintHelper.printList(result, "\n", bufferedWriter);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
