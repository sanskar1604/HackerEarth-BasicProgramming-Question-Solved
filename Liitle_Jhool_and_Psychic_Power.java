import java.util.Scanner;
 
 
public class TestClass {
    public static void main(String[] args) {
        Scanner s5 = new Scanner(System.in);
        String s = s5.next();
        boolean b = true;
        for (int i = 0;i<s.length()-6;i++){
            if (s.substring(i, i + 6).equals("000000") || s.substring(i, i + 6).equals("111111")){
                b = false;
                break;
            }
        }
        if (!b) System.out.println("Sorry, sorry!");
        else System.out.println("Good luck!");
    }
}