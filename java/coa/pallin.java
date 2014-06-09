//wap to check if  it is pallindrome  array index to keep in mind
class Pallin
	{public static void main(String[] s)
	{int count=0;
	for(int i=0;i<s[0].length();i++)
		{if(s[0].charAt(i)==s[0].charAt(s[0].length()-1-i))
			{count=0;
			}
		else
			{count++;
			break;
			}
		}
	if(count==0)
		{System.out.println("yeah");
		}
	else
		{System.out.println("naah");
		}
	}
	}