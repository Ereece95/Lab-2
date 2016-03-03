// ******Class to track the location of the object****** //
// Put in header file because if I put it before the MyForm, it wouldn't compile. 
// This way, everything works.

public class Location
{
public:
	int getX(){ return x; }
	int getY(){ return y; }

	void setX(int new_x)
	{
		x = new_x;
	}
	void setY(int new_y)
	{
		y = new_y;
	}
private:
	int x = 150, y = 150;


};

