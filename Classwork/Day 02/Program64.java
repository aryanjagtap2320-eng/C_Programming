class Program64
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

    for(iCnt = 6; iCnt >= 1; iCnt--)
    {
        System.out.println("Jay Ganesh...");
    }
}
}