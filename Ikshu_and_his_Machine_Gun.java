import java.util.*;
class TestClass {
public static void main(String args[] ) throws Exception {
Scanner sc=new Scanner(System.in);
int t=sc.nextInt(),count=0;
int arr[]=new int[t];
for(int i=0;i<t;i++)
{
arr[i]=sc.nextInt();
}
Arrays.sort(arr);
for(int i=0;i<t;i++)
{
System.out.print((arr[i]-count)+" ");
count++;
}
}
}

