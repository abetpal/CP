//author: nobrakebicycle
//created: 19.04.2022 21:37:35 
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

public class String_Game {

    public static int maxLen(int arr[], int n) {
        // Creates an empty hashMap hM

        HashMap<Integer, Integer> hM = new HashMap<Integer, Integer>();

        // Initialize sum of elements
        int sum = 0;

        // Initialize result
        int max_len = 0;
        int ending_index = -1;
        int start_index = 0;

        // Traverse through the given array
        for (int i = 0; i < n; i++) {
            arr[i] = (arr[i] == 0) ? -1 : 1;
        }

        for (int i = 0; i < n; i++) {
            // Add current element to sum

            sum += arr[i];

            // To handle sum=0 at last index

            if (sum == 0) {
                max_len = i + 1;
                ending_index = i;
            }

            // If this sum is seen before,
            // then update max_len if required
            if (hM.containsKey(sum)) {
                if (max_len < i - hM.get(sum)) {
                    max_len = i - hM.get(sum);
                    ending_index = i;
                }
            } else // Else put this sum in hash table
                hM.put(sum, i);
        }

        for (int i = 0; i < n; i++) {
            arr[i] = (arr[i] == -1) ? 0 : 1;
        }

        int end = ending_index - max_len + 1;
        System.out.println(max_len);
        return max_len;
    }

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
        String s = scan.next();
        int a[] = new int[s.length()];
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'A') {
                a[i] = 0;
            } else {
                a[i] = 1;
            }
        }
        // for (int i = 0; i < a.length; i++) {
        // System.out.println(a[i]);
        // }
        String_Game sub = new String_Game();
        int n = a.length;

        sub.maxLen(a, n);

    }
}
