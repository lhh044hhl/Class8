#include<opencv.hpp>
using namespace cv;
using namespace std;

int main() {
	Mat src;
	Mat src1;
	Mat dst;
	Mat statsMat;
	Mat centroids;
	Mat kernel = getStructuringElement(MORPH_RECT, Size(4, 4));




	Mat image = imread("E:\\dignal picture\\rim.png", 0);
	threshold(image, src1, 100, 255, THRESH_BINARY_INV);
	morphologyEx(src1, src,
		MORPH_ERODE, kernel);
	int n = connectedComponentsWithStats(src, dst,
		statsMat, centroids,
		8, CV_32S
	);
	for (int i = 1;i < n;i++) {
		Rect bndbox;
		bndbox.x = statsMat.at<int>(i, 0);
		bndbox.y = statsMat.at<int>(i, 1);
		bndbox.width = statsMat.at<int>(i, 2);
		bndbox.height = statsMat.at<int>(i, 3);
		if (((bndbox.width / bndbox.height) < 1.05) && (bndbox.height / bndbox.width) < 1.05) {
			rectangle(src, bndbox, CV_RGB(255, 255, 255), 1, 8, 0);
		}
	}

	
	imshow("result", src);
	cout << n - 1 << endl;
	waitKey(0);
}