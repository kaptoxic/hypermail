#ifndef __SETUP_H
#define __SETUP_H

typedef int bool;

struct Config {
    char *label;		/* the real-name of what to set */
    void *value;		/* pointer to the real storage */
    void *def;			/* default value */
    char flags;			/* specifies the kind of config setting, 
                                   see defines below */
    char *verbose;		/* detailed description of the label */
    bool changed;		/* read from .config or .set file */
};

#define CFG_INTEGER 0		/* 0 - 2G */
#define CFG_SWITCH  1		/* TRUE / FALSE */
#define CFG_STRING  2		/* regular string, pointing to a static 
                                   string area */
#define CFG_LIST    3		/* comma seperated list, uses itemlist */
#define CFG_FUNCTION 4		/* function */
#define CFG_OCTAL   5		/* numerical, octal based */

#define BTRUE (void *)1
#define BFALSE (void *)0

#define INT(x) (void *)x

int ConfigInit(char *filename);
void ConfigCleanup(void);
int ConfigAddItem(char *line);
void MakeConfig(bool);		/* set to TRUE to include comments */
void PreConfig(void);
void PostConfig(void);

extern char *set_language;
extern char *set_htmlsuffix;
extern char *set_mbox;
extern char *set_archives;
extern char *set_custom_archives;
extern char *set_about;
extern char *set_dir;
extern char *set_defaultindex;

extern bool set_overwrite;
extern bool set_inlinehtml;
extern bool set_increment;
extern bool set_readone;
extern bool set_reverse;
extern bool set_showprogress;
extern bool set_showheaders;
extern bool set_showhtml;
extern bool set_showbr;
extern bool set_showhr;
extern bool set_showreplies;
extern bool set_show_msg_links;
extern bool set_usetable;
extern bool set_indextable;
extern bool set_iquotes;
extern bool set_eurodate;
extern bool set_require_msgids;
extern bool set_discard_dup_msgids;
extern bool set_usemeta;
extern bool set_uselock;
extern bool set_ietf_mbox;
extern bool set_spamprotect;

extern int set_thrdlevels;
extern int set_dirmode;
extern int set_filemode;
extern int set_locktime;

extern char *set_label;

extern char *set_mailcommand;
extern char *set_mailto;
extern char *set_hmail;
extern char *set_domainaddr;
extern char *set_htmlbody;

extern char *set_icss_url;
extern char *set_mcss_url;

extern char *set_dateformat;
extern char *set_stripsubject;

extern struct hmlist *set_text_types;
extern struct hmlist *set_inline_types;
extern struct hmlist *set_prefered_types;
extern struct hmlist *set_ignore_types;
extern struct hmlist *set_show_headers;

extern char *set_ihtmlheader;
extern char *set_ihtmlfooter;
extern char *set_mhtmlheader;
extern char *set_mhtmlfooter;

extern char *set_attachmentlink;

#endif
