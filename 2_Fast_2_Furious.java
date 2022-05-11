/* IMPORTANT: Multiple classes and nested static classes are supported */

/*
 * uncomment this if you want to read input.
//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility classes
import java.util.*;
*/

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
import java.util.*;
import java.lang.Math;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] dom = new int[n];
        int[] brian = new int[n];
        for(int i = 0; i < n; i++){
            dom[i] = sc.nextInt();
        }
        for(int i = 0; i < n; i++){
            brian[i] = sc.nextInt();
        }
        int maxd = 0, maxb = 0;
        for(int i = 0; i < n - 1; i++){
            int r = Math.abs(dom[i] - dom[i+1]);
            if(r > maxd){
                maxd = r;
            }
        }
        for(int i = 0; i < n - 1; i++){
            int r = Math.abs(brian[i] - brian[i+1]);
            if(r > maxb){
                maxb = r;
            }
        }
        if(maxd > maxb){
            System.out.println("Dom");
            System.out.println(maxd);
        } 
        else if(maxb > maxd){
            System.out.println("Brian");
            System.out.println(maxb);
        }   
        else
            System.out.println("Tie");

    }
}
