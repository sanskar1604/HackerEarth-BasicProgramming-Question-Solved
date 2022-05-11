import java.util.*;
class TestClass{
    public static void main(String args[] ) throws Exception{
        Scanner sc = new Scanner(System.in);
        int P = sc.nextInt();
        int S = sc.nextInt();
        int T = sc.nextInt();
        int H = sc.nextInt();
        int x = sc.nextInt();
        if(x <= (S-T)){
            System.out.println(x*P);
        }else{
            System.out.println( ((S-T)*P) + ((x-(S-T))*H));
        }
    }
}