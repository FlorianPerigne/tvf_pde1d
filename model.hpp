#ifndef MODEL_HPP
#define MODEL_HPP
#include "payoff.hpp"


class model
{
public:
	model(double sigma, double r, int n_t, int n_x);
	model(const std::vector<double>& sigma, double r, int n_t, int n_x);
	model(double sigma, const std::vector<double>& r, double T, int n_t, int n_x);
	model(const std::vector<double>& sigma, const std::vector<double>& r, int n_t, int n_x);
	model(const std::vector<std::vector<double>>& sigma, const double& r, const int& n_t);
	model(const std::vector<std::vector<double>>& sigma, const std::vector<double>& r);
	
	std::vector<double> get_vol_col(const int& i);
	double get_r(const int&i);
	std::vector<std::vector<double>> getSigma();
	
	
private:
	
	std::vector<double> m_r;
	std::vector<std::vector<double>> m_sigma;
};

std::vector<double> getCol(std::vector<std::vector<double>> mat, int i);
std::vector<double> getRow(std::vector<std::vector<double>> mat, int i);

#endif
