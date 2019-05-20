#include <iostream>
using namespace std;
#include "NVBC.h"
#include "NVHD.h"
#include "NVHH.h"
#include "NVHHDB.h"
int main()
{
	NhanVien a("A34013", "Hoang Anh Tuan" , "1231411",1000000);
	a.In();
	cout<<endl;
	NhanVienBC b("A34013", "Hoang Anh Tuan" , "1231411",1000000);
	b.Print();
	cout<<endl;
	NhanVienHD c("A34013", "Hoang Anh Tuan" , "1231411",1000000,60);
	c.InRa();
	cout<<endl;
	NhanVienHD d("A34013", "Hoang Anh Tuan" , "1231411",1000000,10);
	d.InRa();
	cout<<endl;
	NhanVienHH g("A34013", "Hoang Anh Tuan" , "1231411",1000000,10);
	g.InN();
	cout<<endl;
	NhanVienHHDB h("A34013", "Hoang Anh Tuan" , "1231411",1000000,10,200000);
	h.InM();
	return 0;
}
