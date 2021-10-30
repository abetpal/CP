//author: nobrakebicycle
//created: 30.10.2021 17:43:53 
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

public class sum {
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
        Scanner ob = new Scanner(System.in);
        int a, b, n;
        double x, sum;
        sum = 0.0;
        System.out.println("press 1 to solve ");
        System.out.println("press 2 to solve");
        System.out.println("press 3 to solve");
        System.out.println("please enter your choice");
        int choice = ob.nextInt();
        switch (choice) {
        case 1: {
            System.out.println("enter the value of x:");
            x = ob.nextInt();
            System.out.println("please enter the value of n:");
            n = ob.nextInt();
            for (a = 1; a <= n; a++) {
                sum = sum + (a / Math.pow(x, a));
            }
            System.out.println("sum:" + sum);
        }
            break;
        case 2: {
            for (a = 1, b = 2; a <= 49 && b <= 50; a++, b++) {
                sum = sum + (a / (double) b);
            }
            System.out.println("the sum:" + sum);
        }
            break;
        case 3: {
            for (a = 1; a <= 10; a++) {
                sum = sum + ((double) a / (double) Math.sqrt(a));

            }
            System.out.println("the sum:" + sum);
        }
            break;
        default:
            System.out.println("please enter your choice from 1 to 3 only!!!");
        }

    }
}
