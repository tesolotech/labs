class Pen
{
	public float price;
	public String name;
	public void setInformation(float price, String name)
	{
		this.price=price;
		this.name=name;
		System.out.println("Price="+price + " "+ "name="+name);
	}

}
class ThisKeyword
{
	public static void main(String args[])
	{
		Pen p=new Pen();
		p.setInformation(12.21f,"Montax");
	}

}
