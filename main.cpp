#include <iostream>

//-----orhcestra-classes-----//
#include "Instrument.h"
#include "Trumpet.h"
#include "Violin.h"

//-----figures-classes-----//
#include "Figure.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"


using namespace std;

void line(){cout<<"-----------------------------------------------\n";}
void dLine(){cout<<"===============================================\n";}

int main()
{
line();
    Instrument instrument;
    instrument.music(10);
line();
    Violin violin;
    violin.music(10);
line();
    Trumpet trumpet;
    trumpet.music(10);
line();
    //using pointers to create objects
    Violin *ptrViolin=new Violin;
    ptrViolin->music(30);
    delete ptrViolin;
line();
    Instrument *ptrInstrument=new Violin;
    ptrInstrument->music(15);
    delete ptrInstrument;
line();
    Instrument *pointer= &violin;
    pointer->music(20);
    delete pointer;
dLine();
    /*
    // Figure cant be have object because is an abstract class (have at least one virtual flied/method)
    Figure figure;
    figure.display();

    //Nor can have pointer to it
    Figure *ptr;
    ptr =&figure;
    ptr->display();
    delete ptr;
    */

    Circle circle1("circle_1",6);
    circle1.display();
line();
    Rectangle rectangle1("rectangle_1",3,7);
    rectangle1.display();
line();
    Square square1("square_1",5);
    square1.display();
line();
    //now working on object with pointers
    Figure *ptrCircle=new Circle("circle_from_pointer",3);
    ptrCircle->display();
    delete ptrCircle;
line();
    Rectangle *ptrRectangle=new Rectangle("rectangle_from_pointer",2,3);
    //can also use Figure as pointer type
    //Figure *ptrRectangle=new Rectangle("rectangle_from_pointer",2,3);
    ptrRectangle->display();
    delete ptrRectangle;
line();
    Figure *ptrSquare=new Square("square_from_pointer",3);
    //can also use Rectangle or Square as pointer type
    //Rectangle *ptrSquare=new Square("square_from_pointer",3);
    //Square *ptrSquare=new Square("square_from_pointer",3);
    ptrSquare->display();
    delete ptrSquare;
dLine();
    return 0;
}

