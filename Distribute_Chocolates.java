import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i = 0; i < t; i++){
            long c = sc.nextLong();
            long n = sc.nextLong();
            long sum = (n * (n + 1) / 2);
            if(sum > c){
                System.out.println(c);
            }else{
                System.out.println((c - sum) % n);
            }
        }
    }
}