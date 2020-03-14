// Both fun is in super class or it may be present on child class or
// it may be present in one super and one child class
class Phone
{

}
class SmartPhone extends Phone
{
	public void Price(float p)
        {
                System.out.println("Phone Price");
        }


	public void PriceSm(float p, int size)
	{
		System.out.println("Smart Phone price and size");
	}


}
public class Overloading
{

	public static void main(String args[])
	{
		SmartPhone sm=new SmartPhone();
		sm.Price(12.25f);
		sm.PriceSm(1252.25f, 5);
	}
}
