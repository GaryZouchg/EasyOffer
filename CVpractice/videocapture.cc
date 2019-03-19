//
// Created by test2 on 19-3-19.
//

#include <iostream>
#include <string>

#include "cvpractice.h"
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main() {

    //VideoCapture vcapt(g_videoPath+"test.avi");

    VideoCapture vcapt(0);  //调用摄像头从文件中读取视频
    Mat edges;
    while(1)
    {
        Mat frame;
        vcapt >> frame;

        cvtColor(frame,edges,COLOR_BGR2GRAY);

        blur(edges,edges,Size(4,4));

        Canny(edges,edges,0,30,3);

        imshow("canny vedio",edges);

        if(waitKey(30)>=0) break;

    }


    system("pause");
    return 0;
}