//import use
import dir2.Packageclass;
class Xyz1
	{void show()
	{dir2.Packageclass ab=new dir2.Packageclass();
	ab.a=10;
	ab.b=11;
	//ab.c=12; since private
	ab.d=10;
	}
	}
class Xyz2 extends dir2.Packageclass
	{void show()
	{Packageclass ab=new Packageclass();
	a=10;
	b=11;
	//c=12; since private
	d=10;
	}
	}
	