class MyString
{
public:
	MyString(const char *str = nullptr);
	MyString(const MyString &other);
	MyString & operator =(const MyString &other);
	~MyString(void);
private:
	char *m_data;
};