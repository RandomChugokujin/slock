/* user and group to drop privileges to */
static const char *user  = "brian";
#define COLORC "red"
static const char *group = "brian";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#3B4252",     /* after initialization */
	[INPUT] =  "#81A1C1",   /* during input */
	[FAILED] = "#bf616a",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
