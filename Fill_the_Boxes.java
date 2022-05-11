import java.io.*;
import java.util.*;
public class app{
public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    for(int q = 0; q < t; q++)
    {
        int i,j;
        int n = sc.nextInt();
        int m = sc.nextInt();
        int k = sc.nextInt();
        int[] c = new int[n];
        int[] b = new int[m];
        for(i = 0; i < n; i++){
            c[i] = sc.nextInt();
        }
        Arrays.sort(c);
        for(i = 0; i < m; i++){
            b[i] = sc.nextInt();
        }
        Arrays.sort(b);
        int b_count = 0, c_count = 0, count = 0;
        while(b_count<m && c_count<n){
            if(b[b_count] >= c[c_count] && b[b_count] <= c[c_count]+k){
            count++;
            c_count++;
            b_count++;
            }else if(b[b_count]<c[c_count])
                b_count++;
            else if(b[b_count]>c[c_count]+k)
                c_count++;
        }
        System.out.println(count);
    }
 
}
}