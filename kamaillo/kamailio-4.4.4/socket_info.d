socket_info.o: $(wildcard  socket_info.c globals.h types.h ip_addr.h str.h \
  compiler_opt.h ut.h comp_defs.h config.h dprint.h cfg_core.h cfg/cfg.h \
  mem/mem.h mem/pkg.h mem/memapi.h mem/src_loc.h mem/meminfo.h \
  mem/memdbg.h mem/shm_mem.h mem/shm.h mem/../lock_ops.h fastlock.h \
  sched_yield.h poll_types.h socket_info.h resolve.h counters.h pt.h \
  timer.h clist.h timer_ticks.h locking.h lock_alloc.h dns_func.h \
  dns_wrappers.h name_alias.h)
