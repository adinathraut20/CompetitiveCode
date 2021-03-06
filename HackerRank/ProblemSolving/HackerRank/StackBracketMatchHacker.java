import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the isBalanced function below.
    static String isBalanced(String s) {
                    int n = s.length();
                    Stack<Character> s1 = new Stack<Character>();
                    
                    for(int i=0;i<n;i++){
                        if(s.charAt(i) == '[' || s.charAt(i) == '(' || s.charAt(i) == '{' ){
                            s1.push(s.charAt(i));
                            continue;
                        }else{
                            if(s1.isEmpty() && (s.charAt(i) == '}' || s.charAt(i) == ')' || s.charAt(i) == ']')){
                                return "NO";
                            }
                             else if((s.charAt(i) == '}' && s1.peek() == '{') || (s.charAt(i) == ')' && s1.peek() == '(') || (s.charAt(i) == ']' && s1.peek() == '[')){
                                s1.pop();
                                continue;
                            }else{
                                return "NO";
                            }  
                        }
                    }
                if(s1.isEmpty()){
                return "YES";
                }
                else{
                    return "NO";
                }

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            String s = scanner.nextLine();

            String result = isBalanced(s);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
