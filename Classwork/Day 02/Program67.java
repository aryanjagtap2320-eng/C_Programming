
import java.util.Scanner;
class Program67

{
    public static void main(String[] args)
    {
        Scanner scanner = null;
        scanner = new Scanner(System.in);

        int iValue = 0;
        System.out.println("Enter the frequency : ");
        iValue = scanner.nextInt();

    Iteration iteration = null;
    iteration = new Iteration();
    
    iteration.DISPLAY(iValue);

    }
}
class Iteration
{
    public void DISPLAY(int iNO)
{
    int iCnt = 0;
    iCnt = 1;
    do
    {
        System.out.println("-------------");
        System.out.println(iCnt + " Jay Ganesh...");
        System.out.println("-------------");
        iCnt++;
    }while( iCnt <= iNO);

}
}