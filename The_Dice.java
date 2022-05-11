import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) != '6'){
                count++;
            }
        }
        if(s.charAt(s.length() - 1) == '6'){
            System.out.println("-1");
        }else{
            System.out.println(count);
        }
    }
}
