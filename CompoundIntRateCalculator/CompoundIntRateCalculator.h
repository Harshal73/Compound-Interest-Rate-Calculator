#ifndef  _FinancialSamples_CompoundIntRateCalculator_
#define  _FinancialSamples_CompoundIntRateCalculator_

class CompoundIntRateCalculator {
public:

	  CompoundIntRateCalculator(double rate);
	  CompoundIntRateCalculator(const CompoundIntRateCalculator& v);
	  CompoundIntRateCalculator& operator =(const CompoundIntRateCalculator& v);
	  double multiplePeriod(double value, int numPeriods);
	  ~CompoundIntRateCalculator();

	  double multiPeriod(double rate);
	  double continousCompounding(double value, int numPeriods);
private: 
	double m_rate;

};
#endif /* defined(_FinancialSamples_CompoundIntRateCalculator_)*/










