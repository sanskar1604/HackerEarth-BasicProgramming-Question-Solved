import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            int n = sc.nextInt();
            int ans = n * (n - 1) + 1;
            System.out.println(ans);
            t--;
        }
    }
}