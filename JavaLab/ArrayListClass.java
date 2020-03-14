import java.util.*;
import java.util.Iterator;
class ArrayListClass
{
	public static void main(String args[])
	{
		ArrayList li=new ArrayList(5);
		ArrayList ll=new ArrayList(10);
		ll.add("I love you archna bharti");
		li.add(ll);
		li.add("Vikash");
		li.add(1703614959);
		li.add("MCA");
		li.add("From IMS");
		li.remove("MCA");
		Iterator it=li.iterator();
		while(it.hasNext())
		{
			System.out.println(it.next());
		}
	}


}
