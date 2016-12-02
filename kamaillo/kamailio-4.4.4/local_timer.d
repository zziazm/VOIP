local_timer.o: $(wildcard  local_timer.c timer.h clist.h dprint.h compiler_opt.h \
  cfg_core.h cfg/cfg.h cfg/../str.h timer_ticks.h timer_funcs.h \
  tcp_conn.h tcp_init.h ip_addr.h ut.h comp_defs.h config.h types.h \
  mem/mem.h mem/pkg.h mem/memapi.h mem/src_loc.h mem/meminfo.h \
  mem/memdbg.h mem/shm_mem.h mem/shm.h mem/../lock_ops.h fastlock.h \
  sched_yield.h tcp_options.h locking.h lock_alloc.h atomic_ops.h \
  atomic/atomic_common.h atomic/atomic_native.h atomic/atomic_x86.h \
  local_timer.h)
