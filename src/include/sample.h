#ifndef _CLASS_MODULE_H_
#define _CLASS_MODULE_H_

#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include "opencv2/opencv.hpp"

#include <math.h>

#include <Eigen/Dense>

class ClassModule
{

  private:

	float a;
	float b;

  public:	
	void Initialize(); 
	void Run(float& res);

	// Set and Get 
	void seT_inputs(float a, float b);
	void geT_inputs(float &a, float &b);

	// Constructor and Distructor
	ClassModule(void);
	~ClassModule(void);
};


#endif 
