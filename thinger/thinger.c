
#include <stdio.h>
#include <confuse.h>

int thinger(){
	
	static cfg_bool_t verbose = cfg_false;
	
	cfg_opt_t opts[] = {
		CFG_SIMPLE_BOOL("thing", &verbose),
		CFG_END()
	};
	
	cfg_t *cfg;
	cfg = cfg_init(opts, 0);
	
	cfg_free(cfg);
	
	printf("done\n");
	
	return 0;
}
