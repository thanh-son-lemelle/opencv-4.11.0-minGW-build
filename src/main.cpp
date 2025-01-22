#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main()
{
    Mat image;
    image = cv::imread("wallhaven-o5ov3l.jpg");
    namedWindow("Goddamn Hippies", WINDOW_AUTOSIZE );
    imshow("Goddamn Hippies", image );

    waitKey(0);

    return 0;
}