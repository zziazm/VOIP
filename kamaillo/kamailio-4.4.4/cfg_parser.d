cfg_parser.o: $(wildcard  cfg_parser.c cfg_parser.h str.h mem/mem.h mem/../config.h \
  types.h mem/../dprint.h compiler_opt.h cfg_core.h cfg/cfg.h mem/pkg.h \
  mem/memapi.h mem/src_loc.h mem/meminfo.h mem/memdbg.h mem/shm_mem.h \
  mem/shm.h mem/../lock_ops.h fastlock.h sched_yield.h trim.h ut.h \
  comp_defs.h)
