tls_hooks.o: $(wildcard  tls_hooks.c tls_hooks.h tcp_conn.h tcp_init.h ip_addr.h \
  str.h compiler_opt.h ut.h comp_defs.h config.h types.h dprint.h \
  cfg_core.h cfg/cfg.h mem/mem.h mem/pkg.h mem/memapi.h mem/src_loc.h \
  mem/meminfo.h mem/memdbg.h mem/shm_mem.h mem/shm.h mem/../lock_ops.h \
  fastlock.h sched_yield.h tcp_options.h locking.h lock_alloc.h \
  atomic_ops.h atomic/atomic_common.h atomic/atomic_native.h \
  atomic/atomic_x86.h timer_ticks.h timer.h clist.h tls_hooks_init.h \
  globals.h poll_types.h)
