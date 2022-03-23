import java.util.Scanner;
public class RelationOp
{
  public static void main( String args[])
  {
    Scanner input= new Scanner(System.in);
    int num1, num2;

    System.out.print("Enter 1st Number: ");
    num1= input.nextInt();

    System.out.print("Enter 2nd number: ");
    num2= input.nextInt();

    if (num1==num2)
      System.out.printf("%d==%d\n", num1,num2);
    if (num1!=num2)
      System.out.printf("%d!=%d\n", num1,num2);
    if (num1<num2)
      System.out.printf("%d<%d\n", num1,num2);
    if (num1>num2)
      System.out.printf("%d>%d\n", num1,num2);
    if (num1<=num2)
      System.out.printf("%d<=%d\n", num1,num2);
    if (num1>=num2)
      System.out.printf("%d%d\n", num1,num2);  
  }
}