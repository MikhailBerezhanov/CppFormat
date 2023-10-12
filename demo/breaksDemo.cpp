#include <iostream>
#include <string>



void ShortParamListFunction(int i1, char c2, bool b3, std::string s4)
{
    LooooooooooongType loooooooooooooooooooooongVariable = someLooooooooooooooooongFunction();

    bool value = aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa +
                     aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa ==
                 aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa &&
             aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa >
                 ccccccccccccccccccccccccccccccccccccccccc;
}


void LongParamListFunction(int iiiiiiiiiiiiiiiii1, char ccccccccccccccccccccccc2, bool b3, std::string s4)
{

}


class ClassInheritanceShort : public IBase1, public IBase2
{

};

class ClassInheritanceLong : public IBasement1, public IBasement2, public IBasement3
{
public:
    void method1();

private:
    void method2();
private:
    double m_data;
};

class ClassInitialization
{
    ClassInitialization(int iiiiiiiiiii, double dddddddddd)
        : m_i(iiiiiiiiiii)
        , m_d(dddddddddd)
        , m_b(false)
        , m_s("")
    {}


    ClassInitialization(int iiiiiiiiiii, double dddddddddd, bool bbbbbbbbbbb, const std::string& ssssssss)
        : m_i(iiiiiiiiiii)
        , m_d(dddddddddd)
        , m_b(bbbbbbbbbbb)
        , m_s(ssssssss)
    {}

    ClassInitialization(int iiiiiiiiiii, double dddddddddd, bool bbbbbbbbbbb, const std::string& ssssssss);


    int m_i;
    double m_d;
    bool m_b;
    std::string m_s;
};


ClassInitialization::ClassInitialization(int iiiiiiiiiii, double dddddddddd, bool bbbbbbbbbbb, const std::string& ssssssss)
    : m_i(iiiiiiiiiii)
    , m_d(dddddddddd)
    , m_b(bbbbbbbbbbb)
    , m_s(ssssssss)
{

}

int main()
{
    const char* x = "veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongString";

    int x = veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongDescription ? firstValue : SecondValueVeryVeryVeryVeryLong;

    TRACE_DEBUG("asdaasdasdzxczxcasdasdsad asdasd asa" << value << "asdasdsads" << asdsad << asdasdasdas << std::boolapha << fasdsaasd << "()" << x);

	return 0;
}