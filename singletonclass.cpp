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
    if(!instance)
    {
        instance=new Singleton();

    }
    return *instance;
}
void SomeOperation()
{
    std::cout<<"some operation"<<std::endl;
}

Singleton(const Singleton&)=delete;
Singleton & operator=(const Singleton&)=delete;
};
Singleton *Singleton::instance=nullptr;
int main()
{
     Singleton &Singleton=Singleton::GetInstance();
     Singleton.SomeOperation();
    return 0;
}