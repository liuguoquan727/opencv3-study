//
// Descriptions: 双边滤波
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
    //双边滤波
    bilateralFilter(src,out,25,25 * 2, 25 / 2);

    imshow("效果图",out);

    imwrite("../img/bilateral_filter.png",out);

    waitKey(0);

    int a[3][4] = {{1,3,5,7},{2,4,6,8}};

    printf("%d",*(*a + 1));
    printf("%d",*(*a));

    int c[] = {1,2,3};
    int *p;

    p = c + 1;

    return 0;
}