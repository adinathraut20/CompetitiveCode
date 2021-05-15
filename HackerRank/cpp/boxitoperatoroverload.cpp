include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box{
    int l,b,h;
//l,b,h are integers representing the dimensions of the box
    public:
// The class should have the following functions : 
    Box()
    {
        l=b=h=0;
    }
    Box(int l,int b,int h)
    {
        this->l=l;
        this->b=b;
        this->h=h;
    }
    Box(Box &a)
    {
        this->l=a.l;
        this->b=a.b;
        this->h=a.h;

    }
// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)l*b*h;
    }
    void operator=(Box& t)
    {
        this->l=t.l;
        this->b=t.b;
        this->h=t.h;
    }
// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box
    bool operator<(Box& temp)
    {
        if(this->l<temp.l)
        {
            return true;
        }
        else if(this->l==temp.l && this->b<temp.l)
            return true;
        else if(this->l==temp.l && this->b==temp.b && this->h<temp.h)
            return true;
        else {
                return false;
            }
    }
//Overload operator < as specified
//bool operator<(Box& b)
    friend ostream& operator<<(ostream& out ,const Box& B1);
   
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
};
 ostream& operator<<(ostream& out ,const Box& B1)
    {
        out<<B1.l<<" "<<B1.b<<" "<<B1.h;
        return out;
    }

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
