#include "Bureaucrat.hpp"

int main()
{
    std::cout << "====== test ======" << std::endl;
    
    Bureaucrat tom("tom", 10);
    std::cout << "--- tom ---" << std::endl;
    tom.incrementGrade();
    std::cout << "After increment:" << tom.getGrade() << std::endl;
    tom.decrementGrade();
    std::cout << "After decrement:" << tom.getGrade() << std::endl;

    Bureaucrat hightman("Hightman", 1);
    std::cout << "--- Hightman ---" << std::endl;
    hightman.incrementGrade();
    std::cout << "After increment:" << hightman.getGrade() << std::endl;
    hightman.decrementGrade();
    std::cout << "After decrement:" << hightman.getGrade() << std::endl;

    Bureaucrat worstman("Worsttman", 150);
    std::cout << "--- Worstman ---" << std::endl;
    worstman.decrementGrade();
    std::cout << "After decrement:" << worstman.getGrade() << std::endl;
}
