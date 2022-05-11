import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t > 0){
        int vowels = 0;
        String newstr = "";
        String S = sc.next();
        int Q = sc.nextInt();
        StringBuilder ans = new StringBuilder(S);
        for(int j=0;j<S.length();j++){
            char ch=S.charAt(j);
            if((ch=='a')&&(Q>0)){
                ans.setCharAt(j, 'b');
                Q--;
            }
            else if((ch=='e')&&(Q>0)){
                ans.setCharAt(j, 'f');
                Q--;
            }
            else if((ch=='i')&&(Q>0)){
                ans.setCharAt(j, 'j');
                Q--;
            }
            else if((ch=='o')&&(Q>0)){
                ans.setCharAt(j, 'p');
                Q--;
            }
            else if((ch=='u')&&(Q>0)){
                ans.setCharAt(j, 'v');
                Q--;
            }
            else
                ans.setCharAt(j, ch);
        }
        System.out.println(ans);
        t--;
    }

}
