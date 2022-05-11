import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc =  new Scanner(System.in);
        String s = sc.nextLine();
        int count = 0, max = 0;
        for(int i = 1; i < s.length(); i++){
            char c1 = s.charAt(i-1);
            char c2 = s.charAt(i);
 
            if(c1 != c2){
                count++;
                if(max < count){
                    max = count;
                }
            }else{
                count = 0;
            }
        }
        System.out.println(max + 1);
    }
}