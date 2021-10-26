//author: nobrakebicycle
//created: 25.10.2021 21:50:42 
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

class A_Twins {
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
        int n = scan.nextInt();
        int a[] = new int[n];
        int total = 0;
        for (int i = 0; i < n; i++) {
            a[i] = scan.nextInt();
            total += a[i];
        }

        Arrays.sort(a);
        int c = 0;
        int sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            sum += a[i];
            c++;
            if (sum > total - sum)
                break;

        }
        System.out.println(c);

    }
}
