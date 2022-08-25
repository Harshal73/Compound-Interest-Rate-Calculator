#include "CompoundIntRateCalculator.h"
#include <cmath>

CompoundIntRateCalculator:: CompoundIntRateCalculator(double  rate)
	: m_rate(rate)
{

}

CompoundIntRateCalculator ::~CompoundIntRateCalculator()
{

}

double CompoundIntRateCalculator::multiPeriod(double rate)
{
	return 0.0;
}

double CompoundIntRateCalculator::continousCompounding(double value, int numPeriods)
{
	return 0.0;
}

CompoundIntRateCalculator::CompoundIntRateCalculator(const CompoundIntRateCalculator& v)
	: m_rate(v.m_rate)
{

}
CompoundIntRateCalculator& CompoundIntRateCalculator:: operator=(const
	CompoundIntRateCalculator& v)
{
	if (this != &v)
	{
		this->m_rate = v.m_rate;

	}
	return *this;

}
double CompoundIntRateCalculator::multiplePeriod(double value, int numPeriods)
{
	double f = value * pow(1 + m_rate, numPeriods);
	return f;

}
