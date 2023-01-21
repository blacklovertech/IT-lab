
import java.util.Scanner;
public class Arithmetic_Operators
{
   public static void main(String args[])
   {   
        try (Scanner s = new Scanner(System.in)) {
                System.out.println("");
                System.out.println("Enter the two numbers to perform operations ");
                System.out.print("Enter the first number : ");
                int x = s.nextInt();
                System.out.print("Enter the second number : ");
                int y = s.nextInt();
                    int add ,sub ,mul, mod;
                    add = x + y;
                    System.out.println("ADD : "+add);
                    sub = x - y;
                    System.out.println("SUB : "+sub);
                    mul = x * y;
                    System.out.println("MULt : "+mul);
                    float div;
                    div = (float) x / y;
                    System.out.println("DIV : "+div);            
                    mod = x % y;
                    System.out.println("MOD : "+mod);
                    System.exit(0);
        }
        }
}