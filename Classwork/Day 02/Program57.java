import java.util.Scanner;
class Program57
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
    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        System.out.println("Jay Ganesh...");
    }
}
}