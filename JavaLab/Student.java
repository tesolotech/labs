class Student extends Person
{
	int roll, classes;
	public  void setRollClass(int r, int c)
	{
		roll=r;classes=c;
	} 
	public void ShowROllClass()
	{
		System.out.println("Roll="+roll);
		System.out.println("Class"+classes);
	}
	public static void main(String args[])
	{
		Student s=new Student();
		s.setData(12,"VIKASH KUMAR","HAJIPUR");
		s.setRollClass(1001,5);
		s.showData();
		s.ShowROllClass();
	}
}
