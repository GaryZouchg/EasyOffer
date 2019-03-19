#include <iostream>
#include <string>

#include "cvpractice.h"
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main() {


    Mat img = imread(g_imgPath+"dog-1.jpeg");

    //float scale = 0.2f;
    //cv::resize(show_img, show_img, cv::Size(static_cast<int>(show_img.cols * scale), static_cast<int>(show_img.rows * scale)));


    imshow("Origin Image",img);
    waitKey(1000);
    //cv::Mat show_img = img.clone();

    //腐蚀效果显示
    Mat erodeImg;
    Mat elem= getStructuringElement(MORPH_RECT,Size(15,15));
    erode(img,erodeImg,elem);
    imshow("Afer Eroded",erodeImg);
    waitKey(1000);

    //模糊效果显示
    Mat blurImg;
    blur(img,blurImg,Size(7,7));
    imshow("Afer Blered",blurImg);
    waitKey(1000);

    //边缘检测
    Mat cannyImg, edgeImg, grayImg;
    cannyImg.create(img.size(), img.type());  //创建一个和img大小和类型相同的矩阵
    imshow("After create",cannyImg);
    waitKey(1000);

    cvtColor(img,grayImg,COLOR_BGR2GRAY);  //转换成灰度图像
    imshow("After cvtColor",grayImg);
    waitKey(1000);

    blur(grayImg,edgeImg,Size(3,3));       //使用3*3的内核来降噪
    imshow("After blur",edgeImg);
    waitKey(1000);

    Canny(edgeImg,cannyImg,3,9,3);
    imshow("After Canny",cannyImg);
    waitKey(0);






    std::cout << "Hello, World!" << std::endl;
    return 0;
}