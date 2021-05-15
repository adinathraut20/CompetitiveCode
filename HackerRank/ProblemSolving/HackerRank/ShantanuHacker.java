package q1;
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

class Result {

    /*
     * Complete the 'groupTransactions' function below.
     *
     * The function is expected to return a STRING_ARRAY.
     * The function accepts STRING_ARRAY transactions as parameter.
     */

    public static List<String> groupTransactions(List<String> transactions) {
    // Write your code here
     
     Collections.sort(transactions);
    // System.out.println(transactions);
     int count = 1;
     String sPrev = transactions.get(0);
     String current = null;
     Map<Integer,List<String>> mapp = new TreeMap<Integer,List<String>>(Collections.reverseOrder());
     
     for(int i=1;i<transactions.size();i++){
        current = transactions.get(i);
         if(transactions.get(i).equals(sPrev)){
            count++;
            // if(i==(transactions.size() - 1)){
            //     if(mapp.containsKey(count)){
            //      List<String> li2 = (List<String>) mapp.get(count);
            //      li2.add(sPrev);
            //      mapp.put(count, li2);
            //  }else{
            //      List<String> li1 = new ArrayList<String>();
            //      li1.add(sPrev);
            //      mapp.put(count,li1);
            //  }
             
            // }
            
         }else{
             if(mapp.containsKey(count)){
                 List<String> li2 = (List<String>) mapp.get(count);
                 li2.add(sPrev);
                 mapp.put(count, li2);
             }
             else{
                 List<String> li1 = new ArrayList<String>();
                 li1.add(sPrev);
                 mapp.put(count,li1);
             }
             
             count=1;
             sPrev = transactions.get(i);
             continue;
             
         }
     }
     if(sPrev.equals(current)){
         if(mapp.containsKey(count)){
                 List<String> li2 = (List<String>) mapp.get(count);
                 li2.add(sPrev);
                 mapp.put(count, li2);
             }
             else{
                 List<String> li1 = new ArrayList<String>();
                 li1.add(sPrev);
                 mapp.put(count,li1);
             }
     }else{
         if(mapp.containsKey(count)){
                 List<String> li2 = (List<String>) mapp.get(count);
                 li2.add(current);
                 mapp.put(count, li2);
             }
             else{
                 List<String> li1 = new ArrayList<String>();
                 li1.add(current);
                 mapp.put(count,li1);
             }
     }
     
     List<String> res = new ArrayList<String>();
     //System.out.println(mapp);
     for(Map.Entry<Integer,List<String>> entry : mapp.entrySet()){
            List<String> li = (List<String>) entry.getValue();
            Collections.sort(li);
            for(String l : li ){
                res.add(l+" "+ entry.getKey());
            }
      }
     return res;
     
     /* Map<String , Integer> freq = new TreeMap<>();
      for(String s : transactions){
        
          if(freq.containsKey(s)){
              int i = freq.get(s);
              i++;
              freq.put(s, i);
          }else{
              freq.put(s, 1);
          }
      }
      
     
      HashSet<Integer> it = new HashSet<Integer>();
     Map<Integer , HashSet> mapp = new TreeMap<>();
     
      for(Map.Entry<String,Integer> entry : freq.entrySet()){
          if(it.contains(entry.getValue())){
              HashSet<String> sSet = (HashSet<String>) mapp.get(entry.getValue());
              sSet.add(entry.getKey());
              mapp.put(entry.getValue(), sSet);
              
          }else{
              it.add(entry.getValue());
              HashSet<String> hSet1 = new HashSet<String>();
              hSet1.add(entry.getKey());
              mapp.put(entry.getValue(),hSet1);
          }
      }
       Iterator<Integer> itr = it.iterator();
        List<Integer> res1 = new ArrayList<>();
       while(itr.hasNext()){
           res1.add(itr.next());
       }
      Collections.reverse(res1);
        List<String> res = new ArrayList<>();
       for(int i : res1){
           HashSet<String> hset = (HashSet<String>) mapp.get(i);
           List<String> list = new ArrayList<String>(hset); 
        Collections.sort(list); 
           for(String s : list){
               res.add(s+" "+i);
           }
       }*/
       
     // return res;
      
      
    }

}

public class ShantanuHacker {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int transactionsCount = Integer.parseInt(bufferedReader.readLine().trim());

        List<String> transactions = IntStream.range(0, transactionsCount).mapToObj(i -> {
            try {
                return bufferedReader.readLine();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        })
            .collect(toList());

        List<String> result = Result.groupTransactions(transactions);

        bufferedWriter.write(
            result.stream()
                .collect(joining("\n"))
            + "\n"
        );

        bufferedReader.close();
        bufferedWriter.close();
    }
}
''