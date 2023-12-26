class MyThread implements Runnable {
    public void run()
    {
        for(int i=1;i<=5;i++)
        {
            String threadName = Thread.currentThread().getName();
            System.out.println(threadName+" i"+"="+i);
            if("T1".equals(threadName))
            {
                Thread.yield();
            }
        }
    }
}


public class yield1
{
    public static void main(String args[])
    {
        MyThread r=new MyThread();
        Thread t1 = new Thread(r,"T1");
        Thread t2 = new Thread(r,"T2");
        t1.start();
        t2.start();
    }
}