#include <iostream>
# include <string>
using namespace std;


double calculateSquareArea(double side);
double calculateRectangleArea(double length, double width);
double calculateTriangleArea(double base, double height);

int main(){
    std::cout<<"Please select the area of the shape you want to calculate: "<<std::endl;
    std::cout<<"1. Square"<<std::endl;
    std::cout<<"2. Rectangle"<<std::endl;
    std::cout<<"3. Triangle"<<std::endl;
    std::cout<< "4. Quit program" << std::endl;


    std ::cout<< "Enter selection: " << std::endl;
    int selection;
    std::cin >> selection;  
    std::cout << "You selected option " << selection << std::endl;


        switch (selection) {
            case 1:
                double side;
                std::cout << "Enter the side length of the square: ";   
                std:: cin>>side; 
                std::cout << "The area of the square is: " << calculateSquareArea(side) << endl;
                break;
            case 2:
                double length, width;
                std::cout << "Enter the length and width of the rectangle: ";
                std::cin >> length >> width;
                std::cout << "The area of the rectangle is: " << calculateRectangleArea(length, width) << std::endl;
                break;
            case 3:
                double base, height;
                std::cout << "Enter the base and height of the triangle: ";
                std::cin >> base >> height;
                std::cout << "The area of the triangle is: " << calculateTriangleArea(base, height) << std::endl;
                break;
            case 4:
                std::cout << "Quitting program. Goodbye!" << std::endl;
                break;

            default:
                std::cout << "Invalid selection. Please try again." << std::endl;
        }




    double calculateSquareArea(double side) 
    {
        return side * side;
    }

    double calculateRectangleArea(double length, double width) {
        return length * width;
    }

    double calculateTriangleArea(double base, double height) {
        return 0.5 * base * height;}

    
  
    }
