stats_funcs.o: $(wildcard  stats_funcs.c ../../dprint.h ../../compiler_opt.h \
  ../../cfg_core.h ../../cfg/cfg.h ../../cfg/../str.h \
  ../../lib/kcore/statistics.h ../../lib/kcore/kstats_wrapper.h \
  ../../lib/kcore/../../counters.h ../../pt.h ../../globals.h \
  ../../types.h ../../ip_addr.h ../../ut.h ../../comp_defs.h \
  ../../config.h ../../mem/mem.h ../../mem/pkg.h ../../mem/memapi.h \
  ../../mem/src_loc.h ../../mem/meminfo.h ../../mem/memdbg.h \
  ../../mem/shm_mem.h ../../mem/shm.h ../../mem/../lock_ops.h \
  ../../fastlock.h ../../sched_yield.h ../../poll_types.h ../../timer.h \
  ../../clist.h ../../timer_ticks.h ../../socket_info.h ../../locking.h \
  ../../lock_alloc.h ../../lib/kcore/../../kstats_types.h stats_funcs.h)
