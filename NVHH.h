#ifndef NVHH_H
#define NVHH_H
#include "NhanVien.h"
class NhanVienHH: public NhanVien
{    
    private:
        double Fix_salary;
        int Contract;
    public:
        NhanVienHH();
        NhanVienHH(string a,string b,string c,double d, int e)
        {
            setMNV(a);
            setHoTen(b);
            setMST(c);
            Fix_salary=d;
            Contract=e;
        };
         //setters
        void setFix_salary(double salary);
        void setContract(int Contract);
        //getters
        double getFix_Salary()const;
        double getSalary()const
		{
			return this-> Fix_salary;
		};
        int getContract()const
        {
            return this -> Contract;
        };
        void InN()
		{
			
			cout<<"Ma Nhan Vien Hoa Hong: "<<getMNV()<<endl;
			cout<<"Ho va Ten NV: "<<getHoTen()<<endl;
			cout<<"Ma So Thue: "<<getMST()<<endl;
			cout<<"Luong thang nay: "<<Contract*Fix_salary<<endl;
		};
};     
#endif
        
