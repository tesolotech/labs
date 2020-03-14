interface test
{
	class Test
	{
	};
	public void ShowData();
}
class Test1 implements test
{
	public void ShowData()
	{System.out.println("Hello");}
	public class Test
	{int x;
	public void GetData(int s){x=s;}}
}
class InterfaceClass
{
	public static void main(String args[])
	{
		Test1 t=new Test1();
		t.ShowData();
		Test tt=new Test();
	}
}
