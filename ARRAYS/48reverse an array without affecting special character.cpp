#include<iostream>//reverse an array without affecting special character
using namespace std;
bool isAlphabet(char x)
{
	return((x>= 'A' && x<='Z')&&(x>='a' && x<='z'));
}
void reverse(char str[])
{
	int l=0;
	int r=strlen(str)-1;
while(l<r)
{
	if(! isAlphabet(str[l]))
	l++;
	else if(! isAlphabet(str[r]))
	r--;
	else
	{
		swap(str[l],str[r]);
		l++;
		r--;
	}
}
}
int main()
{
char str[]=" a !!! b.c.d,e'f,g h i";
cout<<"input string"<<str<<endl;

cout<<"output string"<<str<<endl;
reverse(str);
return 0;
}