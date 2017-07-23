/*
// License Agreement (3-clause BSD License)
// Copyright (c) 2015, Klaus Haag, all rights reserved.
// Third party copyrights and patents are property of their respective owners.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice,
//   this list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the names of the copyright holders nor the names of the contributors
//   may be used to endorse or promote products derived from this software
//   without specific prior written permission.
//
// This software is provided by the copyright holders and contributors "as is" and
// any express or implied warranties, including, but not limited to, the implied
// warranties of merchantability and fitness for a particular purpose are disclaimed.
// In no event shall copyright holders or contributors be liable for any direct,
// indirect, incidental, special, exemplary, or consequential damages
// (including, but not limited to, procurement of substitute goods or services;
// loss of use, data, or profits; or business interruption) however caused
// and on any theory of liability, whether in contract, strict liability,
// or tort (including negligence or otherwise) arising in any way out of
// the use of this software, even if advised of the possibility of such damage.
*/

#ifndef IMAGE_ACQUISITION_HPP_
#define IMAGE_ACQUISITION_HPP_

#include "opencv2/highgui/highgui.hpp"

struct ImgAcqParas
{
    bool isMock = false;
    int device = -1;
    std::string sequencePath = "";
    std::string expansionStr = "";
};

class VideoCaptureMock
{
public:
    VideoCaptureMock();

    virtual ~VideoCaptureMock();

    void open();

    VideoCaptureMock& operator >> (CV_OUT cv::Mat& image);

    bool isOpened();

    void release();

private:
    bool isOpen;
    cv::Mat _staticImage;
};

class ImageAcquisition
{
public:
    ImageAcquisition();

    virtual ~ImageAcquisition();

    void open(ImgAcqParas paras);

    void set(int key, int value);

    double get(int key);

    bool isOpened();

    void release();

    ImageAcquisition& operator >> (CV_OUT cv::Mat& image);

private:
    cv::VideoCapture _cvCap;
    ImgAcqParas _paras;
    VideoCaptureMock _mockCap;
};

#endif
