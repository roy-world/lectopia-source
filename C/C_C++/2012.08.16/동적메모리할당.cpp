#include <iostream>
using namespace std;
#include <string.h>



struct Profile{
	char *np;
	int age;
};

void ProfileCopy(Profile &a, Profile &b);
int main()
{
	Profile hong , sin;	//구조체변수
	int len;

	len = strlen("홍길동");
	hong.np = new char[len+1];
	strcpy(hong.np, "홍길동");
	hong.age = 20;

	len = strlen("신사임당");
	sin.np = new char[len+1];
	strcpy(sin.np, "신사임당");
	sin.age = 30;

	cout << "hong => " << hong.np << " : " <<hong.age << endl;
	cout << "sin  => " << sin.np << " : "<<sin.age <<endl;
	//hong = sin;
	ProfileCopy(hong, sin);
	cout << "hong => " << hong.np << " : " <<hong.age << endl;
	cout << "sin  => " << sin.np << " : "<<sin.age <<endl;

	delete[] hong.np;
	delete[] sin.np;

	return 0;
}

void ProfileCopy(Profile &a, Profile &b)
{
	int len;
	len = strlen(b.np);
	delete[] a.np;
	a.np = new char[len + 1];
	strcpy(a.np, b.np);
	a.age = b.age;
}