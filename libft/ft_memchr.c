// search for a specific byte value within a block of memory
ft_memchr (void *ptr, int value, int num)
{
	int index;
	
	index = 0;
	
	while (index <= num)
	{
		
		index++;
		if (ptr[index] == value)
			return (ptr[index]);
	}
	return(0);
}
