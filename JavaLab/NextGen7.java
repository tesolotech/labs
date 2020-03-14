class NextGen7
{
	public void demo(String str)
	{
		String arr[]=str.split(";");
		for(String s:arr)
		{System.out.println(s);}
	}
	public static void main(String args[])
	{
			char array[]={'a','b','c','d',';','e','f','g'};
			String str=new String(array);
			NextGen7 obj=new NextGen7();
			obj.demo(str);
	}


}
