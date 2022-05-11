import java.util.*;
class Main{
    public static void main(String args[]){
        String reverse = ""; 
        Scanner sc = new Scanner(System.in);
        String original = sc.nextLine();
        int length = original.length();
        for (int i = length - 1; i >= 0; i--)
            reverse = reverse + original.charAt(i);
        if (original.equals(reverse))
            System.out.println("YES");
        else
        System.out.println("NO");
    } 
}