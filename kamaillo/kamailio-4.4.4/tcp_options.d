tcp_options.o: $(wildcard  tcp_options.c tcp_options.h dprint.h compiler_opt.h \
  cfg_core.h cfg/cfg.h cfg/../str.h globals.h types.h ip_addr.h ut.h \
  comp_defs.h config.h mem/mem.h mem/pkg.h mem/memapi.h mem/src_loc.h \
  mem/meminfo.h mem/memdbg.h mem/shm_mem.h mem/shm.h mem/../lock_ops.h \
  fastlock.h sched_yield.h poll_types.h timer_ticks.h tcp_init.h)
