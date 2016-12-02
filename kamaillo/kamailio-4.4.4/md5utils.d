md5utils.o: $(wildcard  md5utils.c md5.h md5utils.h str.h dprint.h compiler_opt.h \
  cfg_core.h cfg/cfg.h ut.h comp_defs.h config.h types.h mem/mem.h \
  mem/pkg.h mem/memapi.h mem/src_loc.h mem/meminfo.h mem/memdbg.h \
  mem/shm_mem.h mem/shm.h mem/../lock_ops.h fastlock.h sched_yield.h)
