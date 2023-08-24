//WAP to convert seconds to hour,minute and secomds
import java.util.*;
public class secs {
    public static void main(String[] args) {
        {
            int hrs,secs,mins;
            Scanner in=new Scanner(System.in);
            System.out.println("Enter time in seconds");
            secs=in.nextInt();
            hrs=secs/3600;
            mins=(secs%3600)/60;
            int secs1=secs%60;
            System.out.println("hours="+hrs+"\n"+"seconds="+secs1+"\n"+"minutes="+mins);
            in.close();
        }
    }
    
}
