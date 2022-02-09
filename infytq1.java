//author: nobrakebicycle
//created: 09.02.2022 11:22:59 
//Hello Traveller
//आज रपट जायें तो हमें ना कहियो
//कल फिसल जायें तो हमें ना उठइयो
//Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
//Dher Mithai mein keeya padela
/* IMPORTANT: Multiple classes and nested static classes are supported */

//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility classes
import java.util.*;
import java.io.*;

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

public class infytq1 {
    public static void main(String args[]) throws Exception {
        /*
         * Sample code to perform I/O:
         * Use either of these methods for input
         * 
         * //BufferedReader
         * BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
         * String name = br.readLine(); // Reading input from STDIN
         * System.out.println("Hi, " + name + "."); // Writing output to STDOUT
         * 
         * //Scanner
         * Scanner s = new Scanner(System.in);
         * String name = s.nextLine(); // Reading input from STDIN
         * System.out.println("Hi, " + name + "."); // Writing output to STDOUT
         * 
         */

        // Write your code here
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String b = scan.nextLine();
        String[] arr = b.split(",");
        String ans = "";

        for (int i = 0; i < s.length(); i++) {
            String c = "" + s.charAt(i);
            int firstindex = s.indexOf(c);
            Vector<Integer> v = new Vector<Integer>();
            for (int index = s.indexOf(c); index >= 0; index = s.indexOf(c, index + 1)) {
                v.add(index);
            }
            // System.out.println(s.charAt(i));
            // for (int j = 0; j < v.size(); j++) {
            // System.out.println(v.get(j));
            // }
            String first = arr[firstindex];
            boolean flag = true;
            for (int j = 0; j < v.size(); j++) {
                if (first.compareTo(arr[v.get(j)].trim()) != 0) {
                    flag = false;
                    // System.out.println(
                    // first + " flag " + s.charAt(i) + " value " +
                    // first.compareTo(arr[v.get(j)].trim()));
                }

            }

            for (int j = 0; j < arr.length; j++) {
                if (v.indexOf(j) == -1) {
                    if (first.compareTo(arr[j].trim()) == 0) {
                        flag = false;
                        // System.out.println(first + " flag " + s.charAt(i) + " value " +
                        // arr[v.get(j)]);
                    }
                }
            }
            if (flag == true && ans.indexOf(c) == -1) {
                ans += s.charAt(i);
            }

        }

        if (ans == "") {
            ans = "NA";
        }

        System.out.println(ans);

    }
}
