//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//Mat imgHSV, mask, imgColor;
//int hmin = 0, smin = 0, vmin = 0;
//int hmax = 179, smax = 255, vmax = 255;
//
//VideoCapture cap(0);
//Mat img;
//
//int main() {
//    namedWindow("TrackBars", (640,200)); // Specify the window size here
//
//    createTrackbar("Hue Min", "TrackBars", &hmin, 179);
//    createTrackbar("Hue Max", "TrackBars", &hmax, 179);
//    createTrackbar("Sat Min", "TrackBars", &smin, 255);
//    createTrackbar("Sat Max", "TrackBars", &smax, 255);
//    createTrackbar("Val Min", "TrackBars", &vmin, 255);
//    createTrackbar("Val Max", "TrackBars", &vmax, 255);
//
//    while (true) {
//        cap.read(img);
//
//        cvtColor(img, imgHSV, COLOR_BGR2HSV);
//
//        Scalar lower(hmin, smin, vmin);
//        Scalar upper(hmax, smax, vmax);
//
//        inRange(imgHSV, lower, upper, mask);
//
//        cout << hmin << "," << smin << "," << vmin << "," << hmax << "," << smax << "," << vmax << endl;
//        imshow("Image", img);
//        imshow("Mask", mask);
//
//        waitKey(1);
//    }
//}
