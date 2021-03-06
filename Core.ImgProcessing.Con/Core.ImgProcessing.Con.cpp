// Core.ImgProcessing.Con.cpp : Defines the entry point for the console application.
// Author: HammerHead
// Console for first-time testing perposes
//

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#ifndef TEST_IMG
#define TEST_IMG "Koala.jpg"
#endif

using namespace cv;

int main(int argc, char * argv[])
{
	namedWindow("Test", WINDOW_AUTOSIZE);
	Mat img = imread("c:\\Shares\\Koala.jpg", IMREAD_COLOR);
	imshow("Test", img);
	waitKey(0);
    return 0;
}

