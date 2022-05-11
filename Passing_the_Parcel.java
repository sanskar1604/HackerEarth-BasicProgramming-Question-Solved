import java.io.*;
import java.util.*;
class hack {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int count=0,position=0;
        LinkedList<Integer> list=new LinkedList<Integer>();
        int N = Integer.parseInt(br.readLine());
        for(int i=1;i<=N;i++){
            list.add(i);
        }
        String s = br.readLine();
        for(;list.size()!=1;){
            char c= s.charAt(count);
            if(c=='a'){position++;}
            else{list.remove(position);}
            if(count==(s.length()-1)){count=-1;}
            else{}
            if(position>(list.size()-1)){position=0;}
            else{}
            count++;
        }
        System.out.println(list.get(0));
        list.clear();
        count=0;position=0;
 
}
 
}