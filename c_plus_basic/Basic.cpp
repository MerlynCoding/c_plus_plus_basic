#include <iostream>
#include<cmath>

using namespace std;
namespace Basic {

	int main()
	{
		/*print hellow world */
		cout << "Hello world" << endl;

		/*print half triangle manually */
		cout << "   /|" << endl;
		cout << "  / |" << endl;
		cout << " /  |" << endl;
		cout << "/___|" << endl;

		/*variable*/

		string Name = "John";
		int Age;
		Age = 35;


		cout << "There once was a named " << Name << endl;
		cout << "He was " << Age << " yearss old" << endl;

		Name = " Tom";
		cout << "He liked the name" << Name << endl;
		cout << "But did not like being " << Age << endl;

		/* Data types */

		char grade = 'A'; /*one alphabet*/
		string phrase = "Girrafe accademy"; /*text*/
		int age = 50; /* number */
		float number = 0.5; /*it just coul use short decimal number and minus*/
		double numberd = 2.5; /* it coul use long decimal number and minus */
		bool isMale = false;/* only false or true*/

		/* working with strings */
		cout << "Girraffe academy";
		cout << "hello" << endl;

		cout << "Girraffe academy" << endl;
		cout << "hello" << endl;

		cout << "Girraffe academy\n";
		cout << "hello" << endl;

		cout << phrase << endl;
		cout << phrase[0] << endl;
		cout << phrase[3] << endl;

		phrase[2] = 'h';
		cout << phrase << endl;

		cout << phrase.find('r', 0) << endl;
		cout << phrase.substr(3, 5) << endl;

		/* working with number */
		cout << 5 + 7 << endl;
		cout << 5 * 7 << endl;
		cout << 10 % 3 << endl;
		cout << 4 + 5 * 10 << endl;
		cout << (4 + 5) * 8 << endl;

		int wnum = 4;
		double dnum = 4.5;

		wnum += 80;
		wnum /= 2;

		cout << wnum + dnum << endl;

		return 0;
	}
}

namespace math {
	int main()
	{
	    cout<<"pow is "<< pow(3,2)<<endl;
	    cout<<"floor is "<<floor(8.4)<<endl;
	    cout<<"ceil is "<<ceil(5.2)<<endl;
	    cout<<"sqrt is "<<sqrt(4.9)<<endl;
	    cout<<"round is "<<round(4.2)<<endl;
	    cout<<"fmax is "<<fmax(4,6)<<endl;
		cout<<"fmin is "<<fmin(4,6)<<endl;

		return 0;
	}
}

namespace input{
	int main()
	{
		int age;
		cout<<"enter your input"<<endl;
		cin>>age;
		cout<<"you are"<<age<<" years old"<<endl;


		
		

		double num1,num2;
		cout<<"enter a number : ";
		cin >> num1 ;
		cout << "enter a number : ";
		cin >> num2 ;
		cout << num1 + num2 << endl;

		return 0;
	}
}
