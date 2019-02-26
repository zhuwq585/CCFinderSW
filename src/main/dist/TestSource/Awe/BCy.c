//B
{
char *gitbasename (char *path)
{
	const char *base;

	if (path)
		skip_dos_drive_prefix(&path);

	if (!path || !*path)
		return ".";

	for (base = path; *path; path++) {
		if (!is_dir_sep(*path))
			continue;
		do {
			path++;
		} while (is_dir_sep(*path));
		if (*path)
			base = path;
		else
			while (--path != base && is_dir_sep(*path))
				*path = '\0';
	}
	return (char *)base;

//C
	static char buffer[48];
	switch (err)
	{
	case HOST_NOT_FOUND:
		return "Authoritative answer: host not found";
	case NO_DATA:
		return "Valid name, no data record of requested type";
	case NO_RECOVERY:
		return "Non recoverable errors, FORMERR, REFUSED, NOTIMP";
	case TRY_AGAIN:
		return "Non-authoritative \"host not found\", or SERVERFAIL";
	}
	snprintf(buffer, sizeof(buffer), "Name resolution error %d", err);
	return buffer;
}