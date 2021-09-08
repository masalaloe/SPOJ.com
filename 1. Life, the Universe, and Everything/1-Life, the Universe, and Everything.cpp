using System;

public class Test
{
	public static void Main()
	{
		bool s = true;
		while(s)
		{
			var numb = Console.ReadLine();
			
			// Console.WriteLine(numb);
			
			// string x = "4r2";
			int value;
			if(int.TryParse(numb, out value))
			{
				if ( value < 100 )
				{
					if (value != 42)
					{
						Console.WriteLine(value);
					}
					else
					{
						s = false;
					}
				}else
				{
					
				}
				
			}
	
		}	
		 
	}
	
}