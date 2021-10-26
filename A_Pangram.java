//author: nobrakebicycle
//created: 25.10.2021 19:52:12
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

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

class A_Pangram {
    public static void main(String args[]) throws Exception {
        /*
         * Sample code to perform I/O: Use either of these methods for input
         * 
         * //BufferedReader BufferedReader br = new BufferedReader(new
         * InputStreamReader(System.in)); String name = br.readLine(); // Reading input
         * from STDIN System.out.println("Hi, " + name + "."); // Writing output to
         * STDOUT
         * 
         * //Scanner Scanner s = new Scanner(System.in); String name = s.nextLine(); //
         * Reading input from STDIN System.out.println("Hi, " + name + "."); // Writing
         * output to STDOUT
         * 
         */

        // Write your code here
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        String a = s.nextLine();
        a = s.nextLine();

        a = a.toLowerCase();
        int b[] = new int[26];

        for (int i = 0; i < n; i++) {
            int d = a.charAt(i);
            b[d - 97] = 1;
        }
        int c = 0;
        for (int i = 0; i < 26; i++) {
            if (b[i] == 1) {
                c++;
            }
        }
        if (c == 26) {
            System.out.println("YES");
        } else
            System.out.println("NO");

    }
}
