#include <stdio.h>
class A
{
	public:
		virtual void aboutus()
		{
			printf("This is A\n");
		}
};
class B : public A
{
	public:
		void aboutus()
		{
			printf("This is B\n");
		}
};
class C : public B
{
	public:
		void aboutus()
		{
			printf("This is C\n");
		}
};

int main() {
	A *p;
	p=new A();
	p->aboutus();
	p=new B();
	p->aboutus();
	p=new C();
	p->aboutus();
	return 0;
}
