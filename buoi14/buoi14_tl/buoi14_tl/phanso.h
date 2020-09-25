#pragma once

class phanso
{
	public:
		int tu;
		int mau;

		phanso();
		phanso(int tu, int mau);
		~phanso();
		phanso operator*(phanso b);
};
