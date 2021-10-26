//author: nobrakebicycle
//created: 25.10.2021 22:36:55 
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

public class A_Keyboard {
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
        char dir = scan.nextLine().charAt(0);
        String s = scan.nextLine();
        String w[] = new String[3];
        w[0] = "qwertyuiop";
        w[1] = "asdfghjkl;";
        w[2] = "zxcvbnm,./";
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < 3; j++) {
                String v = w[j];
                for (int k = 0; k < w[j].length(); k++) {

                    if (v.charAt(k) == s.charAt(i)) {
                        if (dir == 'L') {
                            System.out.print(v.charAt(k + 1));
                        } else {
                            System.out.print(v.charAt(k - 1));
                        }
                    }

                }
            }
        }

    }
}
