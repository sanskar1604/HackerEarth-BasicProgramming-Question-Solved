import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.*;
import java.math.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        long t = Long.parseLong(in.readLine());
        while(t-->0){
            String s1 = in.readLine();
            String s2 = in.readLine();
            int arr1[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
            int arr2[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
            for(int i = 97; i <= 122; i++){
                int c = 0;
                for(int j = 0; j < s1.length(); j++){
                    int ch = s1.charAt(j);
                    if(ch == i){
                        c++;
                    }
                    if(c > 0){
                        arr1[i - 97] = c;
                    }
                }
            }
            for(int i = 97; i <= 122; i++){
                int c = 0;
                for(int j = 0; j < s2.length(); j++){
                    int ch = s2.charAt(j);
                    if(ch == i){
                        c++;
                    }
                    if(c > 0){
                        arr2[i - 97] = c;
                    }
                }
            }
            int c1 = 0, c2 = 0;
            for(int i=0;i<26;i++){
                if(arr1[i]>arr2[i])
                    c1=1;
                else if(arr1[i]<arr2[i])
                    c2=1;
            }
            if(c1!=0 && c2==0)
                System.out.println("You win some.");
            else if(c2!=0 && c1==0)
                System.out.println("You lose some.");
            else if(c1!=0 && c2!=0)
                System.out.println("You draw some.");
        }
        
    }
}
