/*
 *  make_test_background_image.h
 *  FoodcamClassifier
 *
 *  Created by Roy Shilkrot on 8/21/11.
 *  Copyright 2011 MIT. All rights reserved.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include <opencv2/opencv.hpp>
#include <fstream>
#include <iostream>
#include <string>

#include <dirent.h>
#ifdef _WIN32
#include <io.h>
#else
#include <unistd.h>
#endif
#include <sys/stat.h>
#include <sys/types.h>

using namespace cv;
using namespace std;