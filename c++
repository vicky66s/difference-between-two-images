// 0
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // File paths for the images.
    string image1_path = "image1.jpg";
    string image2_path = "image2.jpg";

    // Read the images625
    Mat image1 = imread(image1_path);
    Mat image2 = imread(image2_path);

    // Check if images were successfully loaded
    if (image1.empty() || image2.empty()) {
        cout << "Error: Couldn't load the images." << endl;
        return -1;
    }

    // Check the dimensions of both images
    if (image1.size() == image2.size()) {
        // Calculate the absolute difference between the images
        Mat difference;
        absdiff(image1, image2, difference);

        // Display the difference
        imshow("Difference", difference);
        waitKey(0);
        destroyAllWindows();
    } else {
        cout << "Error: Images are not the same size." << endl;
    }

    return 0;
}
