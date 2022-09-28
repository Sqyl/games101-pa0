#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){
    std::cout << "Games101 Individual Homework 0" << std::endl
              << "Author : Sqyl" << std::endl
              << "\n" << std::endl;
    // // Basic Example of cpp
    // std::cout << "Example of cpp \n";
    // float a = 1.0, b = 2.0;
    // std::cout << a << std::endl;
    // std::cout << a/b << std::endl;
    // std::cout << std::sqrt(b) << std::endl;
    // std::cout << std::acos(-1) << std::endl;
    // std::cout << std::sin(30.0/180.0*acos(-1)) << std::endl;

    // // Example of vector
    // std::cout << "Example of vector \n";
    // // vector definition
    // Eigen::Vector3f v(1.0f,2.0f,3.0f);
    // Eigen::Vector3f w(1.0f,0.0f,0.0f);
    // // vector output
    // std::cout << "Example of output \n";
    // std::cout << v << std::endl;
    // // vector add
    // std::cout << "Example of add \n";
    // std::cout << v + w << std::endl;
    // // vector scalar multiply
    // std::cout << "Example of scalar multiply \n";
    // std::cout << v * 3.0f << std::endl;
    // std::cout << 2.0f * v << std::endl;

    // // Example of matrix
    // std::cout << "Example of matrix \n";
    // // matrix definition
    // Eigen::Matrix3f i,j;
    // i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    // j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // // matrix output
    // std::cout << "Example of output \n";
    // std::cout << i << std::endl;
    // std::cout << "Example of i + j" << std::endl << i + j << std::endl;
    // std::cout << "Example of i * 2.0" << std::endl << i * 2.0 << std::endl;
    // std::cout << "Example of i * j" << std::endl << i * j << std::endl;
    // std::cout << "Example of i * v" << std::endl << i * v << std::endl;
    // // matrix add i + j
    // // matrix scalar multiply i * 2.0
    // // matrix multiply i * j
    // // matrix multiply vector i * v

    Eigen::Vector3f p1;
    p1 << 2.0f, 1.0f, 1.0f;
    Eigen::Matrix3f rotate;
    double ang_rotate = 45.0 / 180.0 * acos(-1);
    rotate << cos(ang_rotate), -sin(ang_rotate), 0,
              sin(ang_rotate), cos(ang_rotate), 0,
              0, 0, 1;
    Eigen::Matrix3f transl;
    transl << 1, 0, 1,
              0, 1, 2,
              0, 0, 1;
    std::cout << "p1:" << std::endl << p1 << std::endl;
    std::cout << "Rotate:" << std::endl << rotate * p1 << std::endl;
    std::cout << "Translate:" << std::endl << transl * rotate * p1 << std::endl;

    return 0;
}