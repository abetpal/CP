//author: nobrakebicycle
//created: 30.11.2021 22:12:32 
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

public class A_Alarm_Clock {
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
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t > 0) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            int d = scanner.nextInt();
            if (b >= a)
                System.out.println(b);
            else {
                if (d >= c)
                    System.out.println("-1");
                else {
                    int x = c - d;
                    int r = (a - b) % x;
                    int n;
                    if (r == 0)
                        n = (a - b) / x;
                    else
                        n = (a - b) / x + 1;
                    long an = (long) b + (long) n * c;
                    System.out.println(an);
                }
            }
            t--;
        }

    }
}
