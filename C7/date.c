while (getline(line, sizeof(line)) > 0) {
	if (sscanf(line, "%d %s %d", &day, monthname, &year) == 3)
		printf("valid: %s\n", line);    /* 25 Dec 1988 form */
	else if (sscanf(line, "%d/%d/%d", &month, &day, &year) == 3)
		printf("valid: %s\n", line);    /* mm/dd/yy form */
	else
		printf("invalid: %s\n", line);  /* invalid form */
}
