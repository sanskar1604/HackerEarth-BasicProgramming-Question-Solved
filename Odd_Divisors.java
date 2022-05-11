import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
       Scanner sc = new Scanner(System.in);
       int t = sc.nextInt();
       while(t > 0){
           int N = sc.nextInt();
           int M = sc.nextInt();
           long sum = 0;
           while(N>0){
 
            sum+= ((N / 2 + N % 2) % M) * ((N / 2 + N % 2) % M);
            sum = sum % M;
            N = N / 2;
        }
        System.out.println(sum);
        t--;
       }
 
    }
}