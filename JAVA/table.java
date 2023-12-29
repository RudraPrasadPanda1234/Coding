public class table {
    synchronized void printTable(int n) {
        for (int i = 1; i <= 3; i++) {
            System.out.println(i);
            try {
                Thread.sleep(400);
            } catch (Exception e) {
                System.out.println(e);
            }
        }
    }
}

class MyThread extends Thread{
    table t;

 MyThread(table t)
{
     {
        this.t=t;
    }
    public void run()
    {
        t.printTable(5);
    }
}
}