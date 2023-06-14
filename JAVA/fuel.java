import java.util.*;
public class fuel
{
    public static void main(String args[]) 
    {
        double miles, distance, gallon, fuel,mileage;
        try (Scanner in = new Scanner(System.in)) {
            System.out.println("Enter the quantity of the fuel in litre:");
            fuel = in.nextDouble();
            System.out.println("Distance in km coverd till the tank goes nill:");
            distance = in.nextDouble();
        }
        double p = (fuel / distance) * 100;
        miles = distance * 0.6214;
        gallon = fuel * 0.2642;
        mileage = miles / gallon;
        System.out.println("The fuel consuption in Indian approch is :"+p);
        System.out.println("The fuel consuption in US approch is :" +mileage);
    }
}