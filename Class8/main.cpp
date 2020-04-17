#include<opencv.hpp>
using namespace cv;
using namespace std;

/*int main() {
	Mat src;
	Mat src1;
	Mat dst;
	Mat statsMat;
	Mat centroids;





	Mat image = imread("E:\\dignal picture\\rim.png", 0);
	threshold(image, src1, 98, 105, THRESH_BINARY_INV);
	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	morphologyEx(src1, src,
		MORPH_OPEN, kernel);
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
		if (((bndbox.width / bndbox.height) < 1.01) 
			&& ((bndbox.width / bndbox.height) > 0.99))
		{
			rectangle(src, bndbox, CV_RGB(255, 255, 255), 1, 8, 0);
		}
	}

	
	imshow("result", src);
	cout << n - 1 << endl;
	waitKey(0);
}*/


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
