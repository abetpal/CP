//author: nobrakebicycle
//created: 16.12.2021 19:18:35 
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

public class A_Hulk {
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
        String HATE = "I hate";
        String LOVE = "I love";
        String THAT = "that";
        String IT = "it";

        int n = scan.nextInt();
        StringBuilder b = new StringBuilder("");
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                b.append(HATE);
            } else {
                b.append(LOVE);
            }
            b.append(' ');
            if (i < n - 1) {
                b.append(THAT).append(' ');
            } else {
                b.append(IT);
            }
        }
        System.out.println(b.toString());

    }
}
