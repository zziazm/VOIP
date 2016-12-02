timer.o: $(wildcard  timer.c timer.h clist.h dprint.h compiler_opt.h cfg_core.h \
  cfg/cfg.h cfg/../str.h timer_ticks.h timer_funcs.h error.h signals.h \
  globals.h types.h ip_addr.h ut.h comp_defs.h config.h mem/mem.h \
  mem/pkg.h mem/memapi.h mem/src_loc.h mem/meminfo.h mem/memdbg.h \
  mem/shm_mem.h mem/shm.h mem/../lock_ops.h fastlock.h sched_yield.h \
  poll_types.h locking.h lock_alloc.h cfg/cfg_struct.h \
  cfg/../atomic_ops.h atomic/atomic_common.h atomic/atomic_native.h \
  atomic/atomic_x86.h cfg/../mem/shm_mem.h cfg/../bit_test.h)
