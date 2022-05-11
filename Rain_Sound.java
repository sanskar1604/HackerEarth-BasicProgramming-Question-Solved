import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            long l = sc.nextInt();
            long r = sc.nextInt();
            long s = sc.nextInt();
            double min = (double)l/s;
            long max = r/s;
            if(min <= max){
                System.out.println((long)Math.ceil(min)+" "+max);
            }else{
                System.out.println("-1 -1");
            }
            t--;
        }
 
    }
}