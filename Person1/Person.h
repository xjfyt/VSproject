class Person
{
public:
    Person(const char* str, int age);
    ~Person();
    void show();
private:
    char* name; //����ַ���ʱ���������ڴ�ռ�
    int age;
};
