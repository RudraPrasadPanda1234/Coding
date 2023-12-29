public class ThreadDemo implements Runnable {
    public void run()
    {
        for(int counter =1;counter<=3;counter++)
        {
            System.out.println(Thread.currentThread().getName()+"Thread is running..."+counter);
        }
    }
    public static void main(String args[])
    {
        ThreadDemo threadDemo=new ThreadDemo();
        Thread t1= new Thread(threadDemo,"First ");
        t1.setPriority(4);
        //t1.setPriority(Thread.MAX_PRIORITY );
        Thread t2= new Thread(threadDemo,"Second");
        //t2.setPriority(Thread.MIN_PRIORITY);
        t2.setPriority(2);
        t1.start();
        t2.start();
    }
}
