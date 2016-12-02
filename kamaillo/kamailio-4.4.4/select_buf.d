select_buf.o: $(wildcard  select_buf.c dprint.h compiler_opt.h cfg_core.h cfg/cfg.h \
  cfg/../str.h mem/mem.h mem/../config.h types.h mem/pkg.h mem/memapi.h \
  mem/src_loc.h mem/meminfo.h mem/memdbg.h ut.h comp_defs.h \
  mem/shm_mem.h mem/shm.h mem/../lock_ops.h fastlock.h sched_yield.h)
