If lo and hi are pointers, it is tricky to do a symmetrically bounded
binary search without ever generating a valid address.  Consider the
initialization:

	lo = table;
	hi = table + n - 1;

If n is 0, you've blown it already!  And the asymmetrically bounded one works!

	lo = table;
	hi = table + n;
	while (lo < hi) {
		mid = lo + ((hi - lo) >> 1);
		if (x < *mid)
			hi = mid;
		else if (x > *mid)
			lo + mid + 1;
		else
			return mid;
	}
	return NULL;
