int c4_5()
{
	//二分查找对一维数组进行排序
	int value[10] = {12,23,30,45,48,50,67,82,91,103};

	int low = 0,high = 9,mid;

	int key;

	printf("Enter an key:\n");

	scanf("%d",&key);
	
	while(low<=high)
	{

		mid = (low + high)/2;

		if(key < value[mid])
		{
			high = mid-1;
		}
		else if(key > value[mid])
		{
			low = mid + 1;
		}
		else if(key == value[mid])
		{
			break;
		}

	}
	if(low<=high)
	{
		printf("\n key has been found at %d.",mid);
	}

	else
	{
		printf("\nkey is not found.");
	}


}