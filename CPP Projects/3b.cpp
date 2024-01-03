#include<iostream>
using namespace std;
class Matrix
{
	public:
		int rows,cols;
		int i,j;
		int mat[10][10];
		void getMat();
		void operator+(Matrix &a);
		void operator-(Matrix &b);
		void operator<(Matrix &c);
		void operator==(Matrix &d);
		void operator*(Matrix &e);

};
void Matrix::getMat()
{
	cout<<"Enter no of rows:";
	cin>>rows;
	cout<<"Enter no of cols:";
	cin>>cols;
	cout<<"Enter Elements:"<<endl;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cin>>mat[i][j];
		}
	}
}
void Matrix::operator+(Matrix &a)
{
	Matrix add;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			add.mat[i][j]=mat[i][j]+a.mat[i][j];
		}
	}
	cout<<"Added Matrix:"<<endl;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<add.mat[i][j]<<"\t";
		}
		cout<<endl;
	}

}
void Matrix::operator-(Matrix &b)
{
	Matrix sub;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			sub.mat[i][j]=mat[i][j]-b.mat[i][j];
		}
	}
	cout<<"Subracted Matrix:"<<endl;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<sub.mat[i][j]<<"\t";
		}
		cout<<endl;
	}

}
void Matrix::operator<(Matrix &c)
{
	int count =0;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(mat[i][j]>=c.mat[i][j])
			{
				count = 1;
			}
		}
	}
	if(count==1)
	{
		cout<<"Comparison FALSE"<<endl;
	}
	else
	{
		cout<<"Comparison TRUE"<<endl;
	}

}
void Matrix::operator==(Matrix &d)
{
	int count =0;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(mat[i][j]!=d.mat[i][j])
			{
				count = 1;
			}
		}
	}
	if(count==1)
	{
		cout<<"Equality FALSE"<<endl;
	}
	else
	{
		cout<<"Equality TRUE"<<endl;
	}
}
void Matrix::operator*(Matrix &e)
{
	Matrix mul;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			mul.mat[i][j] = 0;
			for(int k=0;k<cols;k++)
			{
				mul.mat[i][j]=mul.mat[i][j]+mat[i][k]*e.mat[k][j];
			}
		}
	}
	cout<<"Multiplied Matrix:"<<endl;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<mul.mat[i][j]<<"\t";
		}
		cout<<endl;
	}


}
int main()
{
	Matrix m1,m2;
	cout<<"****Reg.no 210601037****"<<endl;
	m1.getMat();
	m2.getMat();
	m1+m2;
	m1-m2;
	m1<m2;
	m1==m2;
	m1*m2;
	return 0;

}

