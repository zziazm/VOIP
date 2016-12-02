statistics.o: $(wildcard  statistics.c ../../ut.h ../../comp_defs.h \
  ../../compiler_opt.h ../../config.h ../../types.h ../../dprint.h \
  ../../cfg_core.h ../../cfg/cfg.h ../../cfg/../str.h ../../mem/mem.h \
  ../../mem/pkg.h ../../mem/memapi.h ../../mem/src_loc.h \
  ../../mem/meminfo.h ../../mem/memdbg.h ../../mem/shm_mem.h \
  ../../mem/shm.h ../../mem/../lock_ops.h ../../fastlock.h \
  ../../sched_yield.h ../../socket_info.h ../../ip_addr.h \
  ../../globals.h ../../poll_types.h statistics.h kstats_wrapper.h \
  ../../counters.h ../../pt.h ../../timer.h ../../clist.h \
  ../../timer_ticks.h ../../locking.h ../../lock_alloc.h \
  ../../kstats_types.h)
