shm_init.o: $(wildcard  shm_init.c shm_init.h mem/shm.h mem/memapi.h mem/src_loc.h \
  mem/meminfo.h mem/memdbg.h mem/../cfg/cfg.h mem/../cfg/../str.h \
  mem/../dprint.h compiler_opt.h cfg_core.h mem/../lock_ops.h fastlock.h \
  sched_yield.h globals.h types.h ip_addr.h ut.h comp_defs.h config.h \
  mem/mem.h mem/pkg.h mem/shm_mem.h poll_types.h)
