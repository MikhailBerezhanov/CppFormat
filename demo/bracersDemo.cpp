#include <iostream>

namespace Formatter::Test
{
    class A {
        public:

        private:
          int x;
    };
}



int main()
{	
    int x = 10;

    switch (x) {
        case 1: {
            break;
        }

        case 2: {
            break;
        }

    case 3: ++x; break;
    default: break;
    }

    enum Y{
        D=123,
    };

    enum X : int
    {
      A,
      B, C,
    };

    if    (false)
    {
        x = 11;
    } else {
        x = 101;
        x *= -1;
    } 

    if (true) {

    }
    else if (x < 99){
        x++;
    }

    while(false){
        x = 12;
    }

    for (size_t i = 0; i < 10 ; ++i )
    {
        std::cout << i ;
    }

    do {
        std::cout << x;
    } while(false);


    try {

    }
    catch   ()
    {

    }

    const auto lambdaShort = [] () {

    };

    const auto lambdaLong = [&x] (int y, double z) {
        1;
        2;
        3;
        4;
        5;
        6;
        7;
        8;
    };

    functionCall(
        []() {
            1;
            2;
            3;
            4;
            return false;
        },
        [asd](int x, double y) {
            return;
        },
        []() {
            return 1;
        }
    );

    std::sort(begin, end, [var = var](const auto& elem){ doThings(elem); });



return 0;
}
