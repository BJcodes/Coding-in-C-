//base class
class Person
{
public:
	Person(string szName, int iYear)
	{
		m_szLastName = szName;
		m_iYearOfBirth = iYear;
	}
	string m_szLastName;
	int m_iYearOfBirth;
	void print()
	{
		cout << "Last name: " << szLastName << endl;
		cout << "Year of birth: " << iYearOfBirth << endl;
	}
protected:
	string m_szPhoneNumber;
};

int main(){

	Person p("Ali", 1990);
	p.print();
	return 0;
}
