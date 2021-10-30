bool checkTrue(list <int> lr, int tolook)
{
	return find(lr.begin(), lr.end(), tolook) != lr.end();
}

bool WinCase(list <int> lr)
{

	if(checkTrue(lr, 1) && checkTrue(lr, 2) && checkTrue(lr, 3))
	{
		return true;
	}
	else if(checkTrue(lr, 4) && checkTrue(lr, 5) && checkTrue(lr, 6))
	{
		return true;
	}
	else if(checkTrue(lr, 7) && checkTrue(lr, 8) && checkTrue(lr, 9))
	{
		return true;
	}
	else if(checkTrue(lr, 1) && checkTrue(lr, 4) && checkTrue(lr, 7))
	{
		return true;
	}
	else if(checkTrue(lr, 2) && checkTrue(lr, 5) && checkTrue(lr, 8))
	{
		return true;
	}
	else if(checkTrue(lr, 3) && checkTrue(lr, 6) && checkTrue(lr, 9))
	{
		return true;
	}
	else if(checkTrue(lr, 1) && checkTrue(lr, 5) && checkTrue(lr, 9))
	{
		return true;
	}
	else if(checkTrue(lr, 3) && checkTrue(lr, 5) && checkTrue(lr, 7))
	{
		return true;
	}

	else return false;

}