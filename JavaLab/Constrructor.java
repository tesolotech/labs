class Box
{
	private int l,b,h;
	public Box()
	{
		l=10;b=20;h=5;
	}
	public Box(int L, int B, int H)
	{
		l=L;b=B;h=H;
	}
	public void showData()
	{
		System.out.println("Length="+l);
		System.out.println("Breadth="+b);
		System.out.println("Height="+h);
	}
	public static void main(String args[])
	{
		Box b1=new Box();
		b1.showData();
	}
}
