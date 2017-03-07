#include <iostream>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;
int main(){
    Mat image=imread("1.jpg",CV_LOAD_IMAGE_COLOR);
    if(!image.data) cout<<"Error!";
    namedWindow("img",WINDOW_AUTOSIZE);
    imshow("img",image);
    waitKey(0);
    return 0;
}
