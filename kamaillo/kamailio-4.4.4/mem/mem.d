mem/mem.o: $(wildcard  mem/mem.c mem/../config.h mem/../types.h mem/../dprint.h \
  mem/../compiler_opt.h mem/../cfg_core.h mem/../cfg/cfg.h \
  mem/../cfg/../str.h mem/../globals.h mem/../ip_addr.h mem/../ut.h \
  mem/../comp_defs.h mem/../mem/mem.h mem/pkg.h mem/memapi.h \
  mem/src_loc.h mem/meminfo.h mem/memdbg.h mem/../mem/shm_mem.h \
  mem/shm.h mem/../lock_ops.h mem/../fastlock.h mem/../sched_yield.h \
  mem/../poll_types.h mem/q_malloc.h mem/shm_mem.h)
