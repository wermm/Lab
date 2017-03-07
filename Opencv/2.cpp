#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;
int main(){
    VideoCapture cap(0);
    Mat img;
    namedWindow("show",WINDOW_AUTOSIZE);
    while(1){
        cap>>img;
        line(img,Point(200,200),Point(400,400),Scalar(255,0,200),3,LINE_AA);
        line(img,Point(400,200),Point(200,400),Scalar(255,0,200),3,LINE_AA);
        circle(img,Point(300,300),100,Scalar(200,0,255),3,LINE_AA);
        ellipse(img,Point(300,300),Size(200,100),-30,0,360,Scalar(100,100,100),5,LINE_AA);
        rectangle(img,Point(200,200),Point(400,400),Scalar(200,200,0),5,LINE_AA);
        imshow("show",img);
        if(waitKey(30)==27) break;
    }
    return 0;
}
