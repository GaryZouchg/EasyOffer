//
// Created by test2 on 19-3-21.
//

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;

int main( int argc, char** argv )
{
    double alpha = 0.5; double beta; double input;

    Mat src1, src2, dst;

    /// Ask the user enter alpha
    std::cout<<" Simple Linear Blender "<<std::endl;
    std::cout<<"-----------------------"<<std::endl;
    std::cout<<"* Enter alpha [0-1]: ";
    std::cin>>input;

    /// We use the alpha provided by the user iff it is between 0 and 1
    if( alpha >= 0 && alpha <= 1 )
    { alpha = input; }

    /// Read image ( same size, same type )
    src1 = imread("../data/LinuxLogo.jpg");
    src2 = imread("../data/WindowsLogo.jpg");

    if( !src1.data ) { printf("Error loading src1 \n"); return -1; }
    if( !src2.data ) { printf("Error loading src2 \n"); return -1; }

    /// Create Windows
    namedWindow("Linear Blend", 1);

    beta = ( 1.0 - alpha );
    addWeighted( src1, alpha, src2, beta, 0.0, dst);

    imshow( "Linear Blend", dst );

    waitKey(0);
    return 0;
}