import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            //Code Start.//By Jayant Surana.
            int result=a;
            for(int j=0; j<n; j++){
                result += Math.pow(2, j)*b;
                if(j<n-1)
                    System.out.print(result+" ");
                else
                    System.out.print(result);
            }
            if(i<t-1)
                System.out.println();
            //Code end.//By Jayant Surana.
        }
        in.close();
    }
}