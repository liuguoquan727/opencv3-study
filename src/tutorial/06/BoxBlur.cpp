//
// Descriptions: 方框滤波
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
    //方框滤波
    boxFilter(src,out,-1,Size(5,5));

    imshow("效果图",out);

    imwrite("../box_blur.png",out);

    waitKey(0);

    return 0;
}
