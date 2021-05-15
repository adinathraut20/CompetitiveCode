import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Stack<Integer> s1 = new Stack<Integer>();
        Stack<Integer> s2 = new Stack<Integer>();
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c = 0;
        while(n-- != 0){
            c = sc.nextInt();
            switch(c){
                case 1:
                        int ele = sc.nextInt();
                       if((s1.isEmpty()) || (s2.peek() <= ele)){
                        
                           s1.push(ele);
                           s2.push(ele);
                           break;
                       }
                       else{
                        s1.push(ele);
                        s2.push(s2.peek());
                            break;
                       }
                       
                case 2:
                        if(s1.isEmpty()){
                            s2.clear();
                            break;
                        }else{
                                s1.pop();
                                s2.pop();
                                break;
                        }
                case 3:
                            if(s1.isEmpty() || s2.isEmpty()){
                                //System.out.println(0);
                                break;
                            }
                        	System.out.println(s2.peek());
                            break;
            }
        }
    }
}
