import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int l = sc.nextInt();
        int m = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
        }
        boolean flag = false;
        int combos = 0;
        for(int i = 0; i <= n - m; i++){
            for(int j = i; j < i + m; j++){
                if(a[j] > l){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                combos++;
            }
            flag = false;
        }
        System.out.println(combos);
    }
}
