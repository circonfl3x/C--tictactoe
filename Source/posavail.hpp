list <int> :: iterator t;

bool checkPos(list <int> array1, list<int> array2, int play)
{

	for(t = array1.begin(); t != array1.end(); t++)
	{
		if(play == *t)
		{
			return false;
		}else ;
	}
	for(t = array2.begin(); t != array2.end(); t++)
	{
		if(play == *t)
		{
			return false;
		}else ;
	}
	return true;

}

