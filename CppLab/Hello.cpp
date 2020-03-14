#include"iostream"
using namespace std;
class abc;
class def
{
	int i1;
	protected:
		int i2;
	public:
		int i3;
	friend abc;
};
class abc
{
	public:
		void main(def A)
		{
			cout<<(A.i1=3);
			cout<<(A.i2=4);
			cout<<(A.i3=5);
		}
};
int main()
{
	def x1;
	abc x2;
	x2.main(x1);
	return 0;
}
