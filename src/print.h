/*
** print.c functions
*/

#ifdef GDBM
int togdbm(void *gp, int num, char *name, char *email,
	   char *date, char *msgid, char *subject, char *inreply,
	   char *fromdate, char *charset, char *isodate,
	   char *isofromdate);
#endif

void printcomment(FILE *, char *, char *);
void printbody(FILE *, struct emailinfo *, int);
char *print_leading_whitespace(FILE *, char *);

void writearticles(int, int);
void writedates(int, struct emailinfo *);
void writesubjects(int, struct emailinfo *);
void writethreads(int, struct emailinfo *);
void writeauthors(int, struct emailinfo *);
void writeattachments(int, struct emailinfo *);

void printdates(FILE *, struct header *, int, int, struct emailinfo *);
void printsubjects(FILE *, struct header *, char **, int, int,
		   struct emailinfo *);
void printauthors(FILE *, struct header *, char **, int, int,
		  struct emailinfo *);
void printattachments(FILE *, struct header *, struct emailinfo *);

int checkreplies(FILE *, int, int level, int thread_file_depth);
void fprint_menu(FILE *, mindex_t, char *, char *, char *, int,
		 struct emailsubdir *);
void fprint_summary(FILE *, int, long, long, int);
void print_index_header_links(FILE *, mindex_t, long, long, int,
			      struct emailsubdir *);
void print_index_footer_links(FILE *, mindex_t, long, int,
			      struct emailsubdir *);
void printhtml(FILE *, char *);
int showheader(char *);
void ConvURLs(FILE *, char *, char *, char *);
char *ConvURLsString(char *, char *, char *);
void write_summary_indices(int);
void write_toplevel_indices(int);
struct emailinfo *nextinthread(int);
void init_index_names(void);
