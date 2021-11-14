import java.util.*;

public class Main{
  public static void main(String args[]){
    StringTokenizer s1 =
    new StringTokenizer("while ( number <=10 ), { number = number -1 ;}", " ");
    StringTokenizer s2 =
    new StringTokenizer("while ( number >10 ), { number = number -1 ;}", " ");
    int con=0;
    while (s1.hasMoreTokens()){
      con++;
      System.out.println("Token "+con+" "+s1.nextToken());
    }
    while (s2.hasMoreTokens()){
      con++;
      System.out.println("Token "+con+" "+s2.nextToken());
    }
    System.out.println("Total Tokens :: "+con);
  }
}

/* for statment
for (int k = 0, m = 100; k < n; k++, m++) { 
  x = x + 1; y = y – 1; 
  }*/ 
