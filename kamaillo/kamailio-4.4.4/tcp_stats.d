tcp_stats.o: $(wildcard  tcp_stats.c tcp_stats.h counters.h pt.h globals.h types.h \
  ip_addr.h str.h compiler_opt.h ut.h comp_defs.h config.h dprint.h \
  cfg_core.h cfg/cfg.h mem/mem.h mem/pkg.h mem/memapi.h mem/src_loc.h \
  mem/meminfo.h mem/memdbg.h mem/shm_mem.h mem/shm.h mem/../lock_ops.h \
  fastlock.h sched_yield.h poll_types.h timer.h clist.h timer_ticks.h \
  socket_info.h locking.h lock_alloc.h tcp_info.h)
