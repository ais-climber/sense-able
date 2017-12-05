#ifndef CAPTURETHREAD_H
#define CAPTURETHREAD_H

#include <QThread>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>
#include <QTimer>

class CaptureThread : public QObject
{
    Q_OBJECT
public:
    CaptureThread();
    ~CaptureThread();
    void run();
    int imagedetect(cv::HOGDescriptor, cv::Mat);

public slots:
    void onStartCapture();

signals:
    void newFrame(cv::Mat*);
    void finished();

private:
    QTimer* timr;
    cv::VideoCapture cap;
    cv::Mat frame;

};

#endif // CAPTURETHREAD_H
