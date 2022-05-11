import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
       Scanner sc = new Scanner(System.in);
       int t = sc.nextInt();
       while(t > 0){
           long n = sc.nextInt();
           System.out.println(n * (n + 1));
           t--;
       }
 
    }
}
