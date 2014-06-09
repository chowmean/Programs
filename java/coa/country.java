//wap to inout country and give its capital and currency
class Country
{public static void main(String... s)
	{String[] country={"usa","india","pakistan","japan"};
	String[][] info={{"new york","dollar"},{"delhi","rs"},{"Islamabad","rs11q"},{"tokto","rsq"}};
	for(int i=0;i<country.length;i++)
		{if(s[0].equalsIgnoreCase(country[i]))
			{System.out.println(info[i][0]+info[i][1]);
			}
		}
	}
}