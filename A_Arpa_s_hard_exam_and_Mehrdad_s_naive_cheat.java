//author: nobrakebicycle
//created: 27.10.2021 18:58:50 
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

public class A_Arpa_s_hard_exam_and_Mehrdad_s_naive_cheat {
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
        Scanner scan = new Scanner(System.in);
        int n;
        n = scan.nextInt();
        if (n == 0)
            System.out.println("1");
        else if (n % 4 == 0) {
            System.out.println("6");
        } else if (n % 4 == 1) {
            System.out.println("8");
        } else if (n % 4 == 2) {
            System.out.println("4");
        } else if (n % 4 == 3) {
            System.out.println("2");
        }

    }
}
