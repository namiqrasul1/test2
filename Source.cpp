//#include <iostream>
//#include <list>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//
//using namespace std;
//
////class Int {
////public:
////	int a;
////	string s;
////
////	Int(int f) {
////		a = f;
////	}
////
////	void show() {
////		cout << a << " ";
////	}
////};
////
////class Person {
////	string name;
////	string surname;
////	int age;
////	double salary;
////public:
////	Person() : name(""), surname(""), age(0) {}
////	Person(const string& name, const string& surname, const int& age) {
////		this->name = name;
////		this->age = age;
////		this->surname = surname;
////	}
////
////	string GetName() const { return name; }
////	string GetSurname() const { return surname; }
////	int GetAge() const { return age; }
////
////	void Print() const {
////		cout << setw(15) << left << name
////			<< setw(15) << left << surname
////			<< setw(15) << left << age << endl;
////	}
////};
////
////class Func {
////	string byField;
////	bool order;
////public:
////	Func(const string& byField, bool order) : byField(byField), order(order) {}
////
////	bool operator()(Person& arg, Person& arg1) {
////		if (byField == "age")
////			return order ? arg.GetAge() < arg1.GetAge()
////			: arg.GetAge() > arg1.GetAge();
////		else if (byField == "name")
////			return order ? arg.GetName() < arg1.GetName()
////			: arg.GetName() > arg1.GetName();
////		else if (byField == "surname")
////			return order ? arg.GetSurname() < arg1.GetSurname()
////			: arg.GetSurname() > arg1.GetSurname();
////	}
////};
////
////int main() {
////	//list<int> l;
////	//for (int i = 0; i < 10; i++)
////	//	l.push_back(rand() % 10);
////
////	//cout << "unsorted list: ";
////	//for (auto i : l)
////	//	cout << i << " ";
////	//cout << "\n";
////
////	//l.sort();
////	//cout << "sorted list: ";
////	//for (auto i : l) 
////	//	cout << i << " "; 
////	//cout << "\n"; 
////
////	//list<Int*> l; 
////	//for (int i = 0; i < 10; i++) 
////	//	l.push_back(new Int(rand() % 10)); 
////
////	//cout << "unsorted list: "; 
////	//for (auto i : l) 
////	//	cout << i->a << " "; 
////	//cout << "\n"; 
////
////	//l.sort([](Int* arg, Int* arg1) { return arg->s < arg1->s; });
////	//cout << "sorted list: "; 
////	//for (auto i : l)
////	//	cout << i->a << " "; 
////	//cout << "\n";
////
////
////	list<Person> people;
////	people.push_back(Person("Hakuna", "Matata", 42));
////	people.push_back(Person("John", "Doe", 52));
////	people.push_back(Person("Mireli", "Ireli", 12));
////
////	cout << "Unsorted people: \n";
////	for (auto person : people)
////		person.Print();
////
////	people.sort([](Person& arg, Person& arg1) { return arg.GetName() < arg1.GetName(); });
////
////	cout << "\nSorted people by Name: \n";
////	for (auto person : people)
////		person.Print();
////
////	people.sort([](Person& arg, Person& arg1) { return arg.GetAge() > arg1.GetAge(); });
////
////	cout << "\nSorted people by Age: \n";
////	for (auto person : people)
////		person.Print();
////
////	people.sort(Func("surname", false));
////
////	cout << "\nSorted people by Surname: \n";
////	for (auto person : people)
////		person.Print();
////
////	people.remove_if([](Person& person) {return person.GetAge() < 20; });
////	cout << "\nRemoved people : \n";
////	for (auto person : people)
////		person.Print();
////
////}
//
//class IncrementFunc {
//	int inc;
//public:
//	IncrementFunc(int in) : inc(in) {}
//	int operator()(int i) { return i + inc; }
//};
//
//void main() {
//	const int size = 10;
//	int arr[size]{ 1,2,3,4,5,6,7,8,9,10 };
//
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << "\n\n";
//
//	//transform(arr, arr + size, arr, [](int i) { return i + 10; });
//	transform(arr, arr + size, arr, IncrementFunc(40)); 
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << "\n\n";
//
//}