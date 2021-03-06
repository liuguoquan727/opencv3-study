//
// Descriptions: 中值滤波
//
// Created by liuguoquan on 2017/10/11.
//

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main() {

    Mat src = imread("../lena.png");

    imshow("原始", src);

    Mat out;
    //中值滤波
    medianBlur(src,out,7);

    imshow("效果图",out);

    imwrite("../median_blur.png",out);

    waitKey(0);

    return 0;
}