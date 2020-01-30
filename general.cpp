/*
Create a class General having a data member as num. Create a constructor to initialize data in num.
Create a setter to update data in num. Create a getter to return value of num.
Create the method factorial() to return factorial of num.
Create a method cube() to return cube of num.
*/

#include <stdio.h>
class General
{
	private:
		int num;
	public:
		General(int num)
		{
			this->num=num;
		}
		void setNum(int num)
		{
			this->num=num;
		}
		int getNum()
		{
			return num;
		}
		int factorial()
		{
			int f=1,i;
			for(i=1;i<=num;i++)
				f=f*i;
			return f;
		}
		int cube()
		{
			return num*num*num;
		}
		
};
int main() {
	General *g=new General(6);
	printf("%d %d\n",g->factorial(),g->cube());
	g->setNum(7);
	printf("%d %d\n",g->factorial(),g->cube());
	return 0;
}
