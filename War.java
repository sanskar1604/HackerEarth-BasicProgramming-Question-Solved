
import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
       Scanner sc = new Scanner(System.in);
       int t = sc.nextInt();
       while(t > 0){
           int n = sc.nextInt();
           int[] bob = new int[n];
           int[] alice = new int[n];
           for(int i = 0; i < n; i++){
               bob[i] = sc.nextInt();
           }
           for(int i = 0; i < n; i++){
               alice[i] = sc.nextInt();
           }
            Arrays.sort(bob);
            Arrays.sort(alice);
            if(bob[n-1] == alice[n-1]){
                System.out.println("Tie");
            }else if(alice[n-1] > bob[n-1]){
                System.out.println("Alice");
            }else{
                System.out.println("Bob");
            }
           t--;
        }

    }
}
