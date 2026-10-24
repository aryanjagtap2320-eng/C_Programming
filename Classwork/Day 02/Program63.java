class Program63
{
    public static void main(String[] args)
    {
    Iteration iteration = null;
    iteration = new Iteration();
    
    iteration.DISPLAY();

    }
}
class Iteration
{
    public void DISPLAY()
{
    int iCnt = 0;

    for(iCnt = 6; iCnt <= 6; iCnt--) // Infinite loop
    {
        System.out.println("Jay Ganesh...");
    }
}
}