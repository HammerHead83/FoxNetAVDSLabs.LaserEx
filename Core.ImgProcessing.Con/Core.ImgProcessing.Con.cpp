// Core.ImgProcessing.Con.cpp : Defines the entry point for the console application.
// Author: HammerHead
// Console for first-time testing perposes
//

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#ifndef TEST_IMG
#define TEST_IMG "c:\\Shares\\Koala.jpg"
#endif

using namespace cv;

int main(int argc, char * argv[])
{
	Mat img = imread(TEST_IMG, IMREAD_COLOR);
	namedWindow("Color", WINDOW_AUTOSIZE);
	imshow("Color", img);
	Mat hsvImg;
	applyColorMap(img, hsvImg, COLORMAP_HSV);
	namedWindow("HSV", WINDOW_AUTOSIZE);
	imshow("HSV", hsvImg);
	Mat gscImg;
	cvtColor(hsvImg, gscImg, CV_RGB2GRAY);
	namedWindow("GrayScale", WINDOW_AUTOSIZE);
	imshow("GrayScale", gscImg);
	waitKey(0);
    return 0;
}

