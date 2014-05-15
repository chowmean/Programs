#include<iostream>

#include<math.h>

using namespace std;

int main()

{
	int t;
	cin>>t;
	float arr[t];
	for(int i=0;i<t;i++)
	{
	
    float firstx,firsty,secondx,secondy,thirdx,thirdy;
    cin>>firstx>>firsty>>secondx>>secondy>>thirdx>>thirdy;
	float first=sqrt(pow((firstx-secondx),2)+ pow((firsty-secondy),2));
	float second=sqrt(pow((thirdx-secondx),2)+ pow((thirdy-secondy),2));
	float third=sqrt(pow((firstx-thirdx),2)+ pow((firsty-thirdy),2));
    float s=0,area=0;
	s = (first+second+third)/2;

    area = sqrt(s*(s-first)*(s-second)*(s-third));
	
    arr[i]=area;
	}
	float largest,smallest;int lindex,sindex;
	largest=arr[0];
	lindex=0;
	sindex=0;
	smallest=arr[0];
	for(int i=1;i<t;i++)
	{if(arr[i]>=largest)
		{largest=arr[i];
		lindex=i;
		}
	if(arr[i]<=smallest)
		{smallest=arr[i];
		sindex=i;
			}
		}
	cout<<sindex+1<<" "<<lindex+1<<endl;
}
