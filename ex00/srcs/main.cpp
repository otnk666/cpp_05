/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 00:15:51 by skomatsu          #+#    #+#             */
/*   Updated: 2026/03/17 17:21:53 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    {
        std::cout << "====== test ======" << std::endl;
    
        Bureaucrat tom("tom", 10);
        std::cout << "--- tom ---" << std::endl;
        tom.incrementGrade();
        std::cout << "After increment:" << tom.getGrade() << std::endl;
        tom.decrementGrade();
        std::cout << "After decrement:" << tom.getGrade() << std::endl;
    }
    {
        std::cout << "--- Hightman ---" << std::endl;
        Bureaucrat hightman("Hightman", 1);
        try {
            hightman.incrementGrade();
        } catch (std::exception &e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }
        std::cout << "After increment:" << hightman.getGrade() << std::endl;
        hightman.decrementGrade();
        std::cout << "After decrement:" << hightman.getGrade() << std::endl;
    }
    {
        std::cout << "--- Worsttman ---" << std::endl;    
        Bureaucrat worstman("Worsttman", 150);
        try {
           worstman.decrementGrade();
        } catch (std::exception &e) {
            std::cout << "Excdeption caught: " << e.what() << std::endl;
        }
        std::cout << "After decrement:" << worstman.getGrade() << std::endl;
    }
}
