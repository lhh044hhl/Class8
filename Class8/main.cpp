#include<opencv.hpp>
using namespace cv;
using namespace std;




//Á·Ï°Ò»
/*int main() {
	Mat bny;
	Mat dst;

	Mat image = imread("E:\\dignal picture\\rim.png");
	Mat src = imread("E:\\dignal picture\\rim.png",0);

	threshold(src, bny, 100, 130, THRESH_BINARY_INV);
	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
	morphologyEx(bny, dst,
		MORPH_OPEN, kernel);

	vector<vector<Point>> contours;
	findContours(dst, contours, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE);

	for (int n = 0;n < contours.size();n++) {
		RotatedRect rbox = minAreaRect(contours[n]);

		if (((rbox.size.width / rbox.size.height) > 0.97)
			&& (rbox.size.width / rbox.size.height) < 1.08
			&&rbox.size.width>10)
		{

			drawContours(image, contours, n, Scalar(0, 255, 255), 1, 8);
			
			/*Point2f vtx[4];
			rbox.points(vtx);
			for (int i = 0;i < 4;i++) {

				line(image, vtx[i], vtx[i < 3 ? i + 1 : 0], Scalar(0, 0, 255), 2, CV_AA);
			
			}
		}
		}
	imshow("mat",image );
	waitKey(0);

}*/

//Á·Ï°¶þ

	/*int main() {
		Mat bny;
		Mat dst;

		Mat image = imread("E:\\dignal picture\\die_on_chip.png");
		Mat src = imread("E:\\dignal picture\\die_on_chip.png", 0);

		threshold(src, bny, 120, 255, THRESH_BINARY);
		Mat kernel = getStructuringElement(MORPH_RECT, Size(12, 12));
		morphologyEx(bny, dst,
			MORPH_OPEN, kernel);

		vector<vector<Point>> contours;
		findContours(dst, contours, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE);

		for (int n = 0;n < contours.size();n++) {
			RotatedRect rbox = minAreaRect(contours[n]);

			if (((rbox.size.width / rbox.size.height) > 0.9)
				&& (rbox.size.width / rbox.size.height) < 1.2
				&&rbox.size.width > 1)
			{

				drawContours(image, contours, n, Scalar(0, 255, 255), 1, 8);

				Point2f vtx[4];
				rbox.points(vtx);
				for (int i = 0;i < 4;i++) {

					line(image, vtx[i], vtx[i < 3 ? i + 1 : 0], Scalar(0, 0, 255), 2, CV_AA);

				}
			}
		}
		imshow("mat", image);
		imshow("ss", bny);
		waitKey(0);

	}*/
