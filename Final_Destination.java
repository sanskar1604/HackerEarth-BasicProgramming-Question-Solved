import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int x = 0, y = 0;
        for(int i = 0; i < s.length(); i++){
            char ch = s.charAt(i);
            switch(ch){
                case 'L':  x = x-1;  
                break;
                case 'R': x = x+1;  
                break;
                case 'U':  y = y+1;  
                break;
                case 'D':  y = y-1;  
                break;
            }
        }
        System.out.println(x+" "+y);
    }
}
