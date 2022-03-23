import java.util.Scanner;
public class GradeCal
{
  public static void main( String args[])
  {
    Scanner input= new Scanner(System.in);
    int num;
   
    System.out.println("Enter Marks: ");
    num= input.nextInt();

    
    if (num>=80 && num<=100)
      System.out.print("Grade=A+\n");

    else if (num>=70 && num<=79)
      System.out.print("Grade=A\n");

    else if (num>=60 && num<=69)
      System.out.print("Grade=A-\n");

    else
      System.out.print("Grade=F\n");
  }
}