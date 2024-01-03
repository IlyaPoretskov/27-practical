#include <geo-shapes.h>

int main() {
    std::cout << "          <<The hierarchy of geometric shapes>>\n"
                 "\tCommands:\n"
                 "\tcircle\n"
                 "\tsquare\n"
                 "\ttriangle\n"
                 "\trectangle\n"
                 "\texit\n";

    while (true) {

        std::string command;

        std::cout << "\nPlease, input the command:\n";
        std::cin >> command;

        while (command != "circle" &&
               command != "square" &&
               command != "triangle" &&
               command != "rectangle" &&
               command != "exit")
        {
            std::cerr << "Wrong input, please try again\n";
            std::cin >> command;
        }

        if (command == "exit") {
            break;
        }
        else if (command == "circle") {

            double x1, x2, R;
            std::string colour;

            std::cout << "Please, input center coordinates; colour (red, blue, green) and radius length:\n";
            std::cin >> x1 >> x2 >> colour >> R;
            auto* circle = new Circle(x1, x2, colour, R);

            std::cout << "\n"
                         "\tCommands for circle:\n"
                         "\tgetDescribingRectangle\n"
                         "\tarea\n"
                         "\texit\n";
            while (true)
            {
                std::cout << "\nPlease, input the command for circle:\n";
                std::cin >> command;

                while (command != "getDescribingRectangle" &&
                       command != "area" &&
                       command != "exit")
                {
                    std::cerr << "Wrong input, please try again\n";
                    std::cin >> command;
                }

                if (command == "getDescribingRectangle")
                {
                    std::cout << "\nDescribing rectangle: " <<
                              circle->getDescribingRectangle() << ", " <<
                              circle->getDescribingRectangle() << std::endl;
                }
                else if (command == "area")
                {
                    std::cout << "\nArea: " << circle->getArea() << std::endl;
                } else
                {
                    break;
                }
            }
        }
        else if (command == "square")
        {
            double x1, x2, side;
            std::string colour;

            std::cout << "Please, input center coordinates, side length and colour (red, blue, green):\n";
            std::cin >> x1 >> x2 >> side >> colour;
            auto* square = new Square(x1, x2, side, colour);

            std::cout << "\n"
                         "\tCommands for square:\n"
                         "\tgetDescribingRectangle\n"
                         "\tarea\n"
                         "\texit\n";
            while (true)
            {
                std::cout << "Please, input the command for square:\n";
                std::cin >> command;

                while (command != "getDescribingRectangle" &&
                       command != "area" &&
                       command != "exit")
                {
                    std::cerr << "Wrong input, please try again\n";
                    std::cin >> command;
                }

                if (command == "getDescribingRectangle")
                {
                    std::cout << "\nDescribing rectangle: " <<
                              square->getDescribingRectangle() << ", " <<
                              square->getDescribingRectangle() << std::endl;
                }
                else if (command == "area")
                {
                    std::cout << "\nArea: " << square->getArea() << std::endl;
                }
                else
                {
                    break;
                }
            }
        }
        else if (command == "triangle")
        {
            double x1, x2, side;
            std::string colour;

            std::cout << "Please, input center coordinates, side length and colour (red, blue, green):\n";
            std::cin >> x1 >> x2 >> side >> colour;
            auto* triangle = new EquilateralTriangle(x1, x2, side, colour);

            std::cout << "\n"
                         "\tCommands for equilateral triangle:\n"
                         "\tgetDescribingRectangle\n"
                         "\tarea\n"
                         "\texit\n";
            while (true)
            {
                std::cout << "Please, input the command for equilateral triangle:\n";
                std::cin >> command;

                while (command != "getDescribingRectangle" &&
                       command != "area" &&
                       command != "exit")
                {
                    std::cerr << "Wrong input, please try again\n";
                    std::cin >> command;
                }

                if (command == "getDescribingRectangle")
                {
                    std::cout << "\nDescribing rectangle: " <<
                              triangle->getDescribingRectangle() << ", " <<
                              triangle->getDescribingRectangle() << std::endl;
                }
                else if (command == "area")
                {
                    std::cout << "\nArea: " << triangle->getArea() << std::endl;
                }
                else
                {
                    break;
                }
            }
        }
        else if (command == "rectangle")
        {
            double x1, x2, Side1, Side2;
            std::string colour;

            std::cout << "Please, input center coordinates, sides lengths and colour (red, blue, green):\n";
            std::cin >> x1 >> x2 >> Side1 >> Side2 >> colour;
            auto* rectangle = new Rectangle(x1, x2, Side1, Side2, colour);

            std::cout << "\n"
                         "\tCommands for rectangle:\n"
                         "\tgetDescribingRectangle\n"
                         "\tarea\n"
                         "\texit\n";
            while (true)
            {
                std::cout << "Please, input the command for rectangle:\n";
                std::cin >> command;

                while (command != "getDescribingRectangle" &&
                       command != "area" &&
                       command != "exit")
                {
                    std::cerr << "Wrong input, please try again\n";
                    std::cin >> command;
                }

                if (command == "getDescribingRectangle")
                {
                    std::cout << "\nDescribing rectangle: " <<
                              rectangle->getDescribingRectangleSide1() << ", " <<
                              rectangle->getDescribingRectangleSide2() << std::endl;
                }
                else if (command == "area")
                {
                    std::cout << "\nArea: " << rectangle->getArea() << std::endl;
                }
                else
                {
                    break;
                }
            }
        }
    }
}
