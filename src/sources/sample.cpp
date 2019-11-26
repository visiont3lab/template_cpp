#include "sample.h"

ClassModule::ClassModule(void)
{
    Initialize();
}

ClassModule::~ClassModule(void)
{
}

void ClassModule::Initialize()
{
    a = 1;
    b = 3;	
}


void ClassModule::Run(float& res)
{
    res = b + a;    
}

	
void ClassModule::seT_inputs(float inp_a, float inp_b)
{
    a = inp_a;
    b = inp_b;
}

void ClassModule::geT_inputs(float &res_a, float &res_b)
{
    res_a = a;
    res_b = b;
}

	

