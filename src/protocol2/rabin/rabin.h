#ifndef __RABIN_H
#define __RABIN_H

extern int blks_generate_init(void);
extern void blks_generate_free(void);
extern int blks_generate(struct asfd *asfd, struct conf **confs,
	struct sbuf *sb, struct blist *blist, int just_opened);
extern int blk_verify_fingerprint(struct blk *blk_to_verify);

#endif
