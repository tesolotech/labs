import java.util.*;
class CBasicProColl
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("<-----------CHOOSE ONE OF THE MORE OPTIONS-------------->:");
		System.out.println("Press 1 for perimeter of rectangle");
		System.out.println("Press 2 for Area of Rectangle");
		System.out.println("Press 3 for Diameter of circle");
		System.out.println("Press 4 for Circumfernce of circle");
		System.out.println("Press 5 for are of circle");
		System.out.println("Press 6 for centimeter to meter");
		System.out.println("Press 7 for centimeter to kilometer");
		System.out.println("Press 8 for celcius to fahrenhit");
		System.out.println("Press 9 for day to month");
		System.out.println("Press 10 for day to year");
		System.out.println("Press 11 for day to week");
		System.out.println("Press 12 for third angle of trangle");
		System.out.println("Press 13 for simple interest");
		System.out.println("Press 14 for compound interest");
		System.out.println("Press 15 for exit");
		System.out.println("Enter Choise:");
		int choise=sc.nextInt();
		switch(choise)
		{
			case 1:
				System.out.println("Enter length of Rectangle:");
				float len=sc.nextFloat();
				System.out.println("Enter width of Rectangle:");
				float width=sc.nextFloat();
				float result=PerimeterRect(len,width);
				System.out.println("Perimeter of Rectangle:"+result);
				break;
			case 2:
				System.out.println("Enter length of rectangle");
				float l=sc.nextFloat();
				System.out.println("Enter width of rectangle");
				float w=sc.nextFloat();
				System.out.println("Area of rectangle:"+AreaofRect(l,w));
				break;
			case 3:
				System.out.println("Enter radius of circle");
				float radius=sc.nextFloat();
				System.out.println("Diameter of circle:"+DiameterOfCircle(radius));
				break;
			case 4:
				System.out.println("Enter radius of circle");
				float ra=sc.nextFloat();
				System.out.println("Circumfrence of circle"+Circum(ra));
				break;
			case 5:
				System.out.println("Enter radius of circle:");
				float rs=sc.nextFloat();
				System.out.println("Area of circle"+AreaOfCircle(rs));
				break;
			case 6:
				System.out.println("Enter length in centimeter");
				float centi=sc.nextFloat();
				System.out.println("Length in meter"+Centimeterinmeter(centi));
				break;
			case 7:
				System.out.println("Enter length in centimeter");
				float ce=sc.nextFloat();
				System.out.println("length in kilometer"+Centimeterinkilometer(ce));
				break;
			case 8:
				System.out.println("Enter tempture in celcius");
				float celcius=sc.nextFloat();
				System.out.println("Celcius to fahrenhit"+celciustofahrenhit(celcius));
				break;
			case 9:
				System.out.println("Enter no of day");
				int day=sc.nextInt();
				System.out.println("Day in month:"+day/30);
				break;
			case 10:
				System.out.println("Enter no of day");
				int d=sc.nextInt();
				System.out.println("Day in year"+d/360);
				break;
			case 11:
				System.out.println("Enter no of day:");
				int dd=sc.nextInt();
				System.out.println("Day in week"+dd/7);
				break;
			case 12:
				System.out.println("Enter first angle of triangle");
				float first=sc.nextFloat();
				System.out.println("Enter second angle of trinagle");
				float second=sc.nextFloat();
				System.out.println("Third andgle of triangle:"+(180-(first+second)));
				break;
			case 13:
				System.out.println("Enter Prienciple amount:");
				float pp=sc.nextFloat();
				System.out.println("Enter duration of taking in month");
				float tt=sc.nextFloat();
				System.out.println("Enter rate of interest in percentage");
				float rr=sc.nextFloat();
				System.out.println("Simple interest of amount"+pp+tt+rr/100);
				break;
			case 14:
				System.out.println("Enter Prienciple amount:");
                                float p=sc.nextFloat();
                                System.out.println("Enter duration of taking in month");
                                float t=sc.nextFloat();
                                System.out.println("Enter rate of interest in percentage");
                                float r=sc.nextFloat();
				System.out.println("Enter no of time to interest calculated");
				float n=sc.nextFloat();
                                System.out.println("Compound interest of amount"+CompoundInterest(p,r,t,n));
                                break;
			case 15:
				System.out.println("Thank for using this");
				System.exit(0);
				break;
			default:
				System.out.println("Have a nice day:");
		}
	}
	static float PerimeterRect(float len, float width)
	{
		float perimeter=2*width+len;
		return(perimeter);
	}
	static float AreaofRect(float len, float width)
	{
		float area=width*len;
		return(area);
	}
	static float DiameterOfCircle(float radius)
	{
		return(2*radius);
	}
	static float Circum(float r)
	{
		float pie=3.14f;
		return(2*pie*r);
	}
	static float AreaOfCircle(float r)
	{
		float pie=3.14f;
		return(pie*r*r);
	}
	static float Centimeterinmeter(float centi)
	{
		return(centi*100);
	}
	static float Centimeterinkilometer(float centi)
	{
		return(centi/100000);
	}
	static float celciustofahrenhit(float celc)
	{
		return(celc*9/5+32);
	}
	static double CompoundInterest(float p, float r, float t, float n)
	{
		float mid=1+r/n;
		return(p*Math.pow(mid,t));
	}
}
