#include<iostream>
class Singleton
{
private:
Singleton()
{
    std::cout<<"instance created"<<std::endl;
}
~Singleton()
{
    std::cout<<"Instance destroyed"<<std::endl;

}
static Singleton *instance;
public:
static Singleton &GetInstance()
{
    return *instance;
}
void SomeOperation()
{
    std::cout<<"some operation"<<std::endl;
}

Singleton(const Singleton&)=delete;
Singleton & operator=(const Singleton&)=delete;
};
//Singleton *Singleton::instance=nullptr;
Singleton *Singleton::instance = new Singleton();

int main()
{
     Singleton &Singleton=Singleton::GetInstance();
     Singleton.SomeOperation();
    return 0;
}