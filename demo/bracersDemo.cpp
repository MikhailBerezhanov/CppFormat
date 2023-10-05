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

return 0;
}
