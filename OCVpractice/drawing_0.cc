//
// Created by me on 3/24/19.
//
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>
const int COL = 640;
const int ROW = 480;
char window_caption[] = "drawing 0 ";
using namespace cv;
using namespace std;

int main()
{
    Mat img = Mat::zeros(ROW,COL,CV_8UC3);

    Point center(COL/2,ROW/2);
    circle( img,
            center,
            5,
            Scalar( 0, 0, 255 ),
            FILLED,      //填充
            LINE_8 );
    //rectangle(show_img, frame.hand_bb, cv::Scalar(0xFF, 0, 0), 3);
    //mat = mat(rect)

    string putstr("OpenCV forerver");
    //Size textsize = getTextSize(putstr, FONT_HERSHEY_COMPLEX, 3, 5, 0);
    Size textsize = getTextSize(putstr, FONT_HERSHEY_COMPLEX_SMALL, 0.6, 0.8, 0);

    std::cout <<"textsize width : "<< textsize.width<<endl;
    std::cout <<"textsize height: "<< textsize.height<<endl;


    //Point org((COL - textsize.width)/2, (ROW - textsize.height)/4);
    Point org(5,textsize.height+6);

    putText(img, putstr, org, FONT_HERSHEY_COMPLEX_SMALL, 0.6, Scalar(0, 0, 255), 0.8, LINE_AA);

    imshow(window_caption,img);
    moveWindow( window_caption, 200, 200 );  //
    waitKey(0);
}