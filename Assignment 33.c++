Virtual Function, Abstract Class 

1. Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
triangle and rectangle from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
triangle or a rectangle interactively, and display the area.
Remember the two values given as input will be treated as lengths of two sides in
the case of rectangles, and as base and height in the case of the triangles, and used
as follows:
Area of rectangle = x * y Area of triangle = 1/2 * x * y
2. Extend the above program to display the area of circles. This requires the addition of
a new derived class 'circle' that computes the area of a circle. Remember, for a circle
we need only one value, its radius, but the get_data() function in the base class
requires two values to be passed. (Hint: Make the second argument of get_data()
function as a default one with zero value.)
3. Using the concept of pointers, write a function that swaps the private data values of
two objects of the same class type.
4. Create a base class called shape. Use this class to store 2 double type values that
could be used to compute the area of figures. Derive 2 specific classes called triangle
and rectangle from the base shape. Add to the base class a member function
get_data() to initialise base class data members and another member function
display_area() to compute and display the area of figures. Make display_area() as a
virtual function and redefine this function in derived classes to suit their requirements.
Using these 3 classes, design a program that will accept the dimensions of the
shapes interactively and display area.
5. Create a base class called Photon. Use this class to store double type value of
wavelength that could be used to calculate photon energy. Create class
calculate_photonEnergy which will photon energy.
Using these classes, calculate photon energy.
6. Extend above to display the area of circles. For a circle,only one value is needed i.e.
radius but in get_data() function 2 values are passed.
7. Create a base class called Matrix. Use this class to store 4 int type values that could
be used to calculate determinants and create matrices. Create class
calculate_determinant which will calculate the determinant of a matrix.
Using these classes, calculate the determinant of the matrix.
8. Create a base class called proof. Use this class to store two int type values that could
be used to prove that triangle is a right angled triangle. Create a class compute
which will determine whether a triangle is a right angled triangle.

Using these classes, design a program that will accept dimensions of a triangle, and
display the result.
(Summary: Prove that triangle is a right angled triangle using pythagoras theorem).
9. Create a base class called volume. Use this class to store two double type values
that could be used to compute the volume of figures. Derive two specific classes
called cube and sphere from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_volume() to compute and display the volume of figures. Make
display_volume() as a virtual function and redefine this function in the derived
classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a cube
or a sphere interactively, and display the volume.
10. Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
square and parallelogram from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
square or a parallelogram interactively, and display the area.

Solution:-

1. #include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;
public:
    void get_data(double a, double b) {
        x = a;
        y = b;
    }
    virtual void display_area() = 0; // Pure virtual function
};

class Triangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Triangle: " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Rectangle: " << x * y << endl;
    }
};

int main() {
    Shape *shape;
    Triangle tri;
    Rectangle rect;

    shape = &tri;
    shape->get_data(5.0, 10.0);
    shape->display_area();

    shape = &rect;
    shape->get_data(5.0, 10.0);
    shape->display_area();

    return 0;
}

2. #include <iostream>
#include <cmath>
using namespace std;

class Shape {
protected:
    double x, y;
public:
    void get_data(double a, double b = 0) {
        x = a;
        y = b;
    }
    virtual void display_area() = 0; // Pure virtual function
};

class Triangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Triangle: " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Rectangle: " << x * y << endl;
    }
};

class Circle : public Shape {
public:
    void display_area() override {
        cout << "Area of Circle: " << M_PI * x * x << endl;
    }
};

int main() {
    Shape *shape;
    Triangle tri;
    Rectangle rect;
    Circle circ;

    shape = &tri;
    shape->get_data(5.0, 10.0);
    shape->display_area();

    shape = &rect;
    shape->get_data(5.0, 10.0);
    shape->display_area();

    shape = &circ;
    shape->get_data(5.0);
    shape->display_area();

    return 0;
}

3. #include <iostream>
using namespace std;

class SwapClass {
private:
    int value;
public:
    SwapClass(int v) : value(v) {}
    void display() const {
        cout << value << endl;
    }
    friend void swap(SwapClass &a, SwapClass &b);
};

void swap(SwapClass &a, SwapClass &b) {
    int temp = a.value;
    a.value = b.value;
    b.value = temp;
}

int main() {
    SwapClass obj1(10), obj2(20);
    cout << "Before swap:" << endl;
    obj1.display();
    obj2.display();

    swap(obj1, obj2);

    cout << "After swap:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}

4. #include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;
public:
    void get_data(double a, double b) {
        x = a;
        y = b;
    }
    virtual void display_area() = 0; // Pure virtual function
};

class Triangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Triangle: " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() override {
        cout << "Area of Rectangle: " << x * y << endl;
    }
};

int main() {
    Shape *shape;
    Triangle tri;
    Rectangle rect;

    char choice;
    double a, b;

    while (true) {
        cout << "\nEnter 't' for Triangle, 'r' for Rectangle, 'q' to quit: ";
        cin >> choice;

        if (choice == 'q') {
            break;
        }

        cout << "Enter two dimensions: ";
        cin >> a >> b;

        if (choice == 't') {
            shape = &tri;
        } else if (choice == 'r') {
            shape = &rect;
        } else {
            cout << "Invalid choice." << endl;
            continue;
        }

        shape->get_data(a, b);
        shape->display_area();
    }

    return 0;
}

5. #include <iostream>
using namespace std;

class Photon {
protected:
    double wavelength;
public:
    void get_data(double wl) {
        wavelength = wl;
    }
    virtual void calculate_photon_energy() = 0; // Pure virtual function
};

class CalculatePhotonEnergy : public Photon {
public:
    void calculate_photon_energy() override {
        const double h = 6.626e-34; // Planck's constant
        const double c = 3.0e8; // Speed of light
        double energy = (h * c) / wavelength;
        cout << "Photon energy: " << energy << " Joules" << endl;
    }
};

int main() {
    CalculatePhotonEnergy photon;
    photon.get_data(500e-9); // Example wavelength in meters
    photon.calculate_photon_energy();

    return 0;
}

6. #include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }
    ~Base() {
        cout << "Base class destructor called" << endl;
    }
};

class Intermediate : public Base {
public:
    Intermediate() {
        cout << "Intermediate class constructor called" << endl;
    }
    ~Intermediate() {
        cout << "Intermediate class destructor called" << endl;
    }
};

class Derived : public Intermediate {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }
    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Derived d;
    return 0;
}

7. #include <iostream>
using namespace std;

class Matrix {
protected:
    int a, b, c, d;
public:
    void get_data(int a1, int b1, int c1, int d1) {
        a = a1; b = b1; c = c1; d = d1;
    }
    virtual void calculate_determinant() = 0; // Pure virtual function
};

class CalculateDeterminant : public Matrix {
public:
    void calculate_determinant() override {
        int determinant = (a * d) - (b * c);
        cout << "Determinant: " << determinant << endl;
    }
};

int main() {
    CalculateDeterminant matrix;
    matrix.get_data(1, 2, 3, 4); // Example values
    matrix.calculate_determinant();

    return 0;
}

8. #include <iostream>
using namespace std;

class Proof {
protected:
    int a, b, c;
public:
    void get_data(int side1, int side2, int hypotenuse) {
        a = side1; b = side2; c = hypotenuse;
    }
    virtual void check_right_angle() = 0; // Pure virtual function
};

class Compute : public Proof {
public:
    void check_right_angle() override {
        if ((a * a + b * b) == (c * c)) {
            cout << "The triangle is a right-angled triangle." << endl;
        } else {
            cout << "The triangle is not a right-angled triangle." << endl;
        }
    }
};

int main() {
    Compute triangle;
    triangle.get_data(3, 4, 5); // Example values
    triangle.check_right_angle();

    return 0;
}

9. #include <iostream>
#include <cmath>
using namespace std;

class Volume {
protected:
    double x, y;
public:
    void get_data(double a, double b = 0) {
        x = a;
        y = b;
    }
    virtual void display_volume() = 0; // Pure virtual function
};

class Cube : public Volume {
public:
    void display_volume() override {
        cout << "Volume of Cube: " << x * x * x << endl;
    }
};

class Sphere : public Volume {
public:
    void display_volume() override {
        cout << "Volume of Sphere: " << (4.0 / 3.0) * M_PI * pow(x, 3) << endl;
    }
};

int main() {
    Volume *volume;
    Cube cube;
    Sphere sphere;

    volume = &cube;
    volume->get_data(3.0);
    volume->display_volume();

    volume = &sphere;
    volume->get_data(3.0);
    volume->display_volume();

    return 0;
}

10. #include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;
public:
    void get_data(double a, double b) {
        x = a;
        y = b;
    }
    virtual void display_area() = 0; // Pure virtual function
};

class Square : public Shape {
public:
    void display_area() override {
        cout << "Area of Square: " << x * x << endl;
    }
};

class Parallelogram : public Shape {
public:
    void display_area() override {
        cout << "Area of Parallelogram: " << x * y << endl;
    }
};

int main() {
    Shape *shape;
    Square sq;
    Parallelogram para;

    shape = &sq;
    shape->get_data(4.0, 0);
    shape->display_area();

    shape = &para;
    shape->get_data(4.0, 5.0);
    shape->display_area();

    return 0;
}
