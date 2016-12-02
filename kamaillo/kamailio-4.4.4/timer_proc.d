timer_proc.o: $(wildcard  timer_proc.c timer_proc.h local_timer.h timer_ticks.h \
  timer_funcs.h timer.h clist.h dprint.h compiler_opt.h cfg_core.h \
  cfg/cfg.h cfg/../str.h cfg/cfg_struct.h cfg/../atomic_ops.h \
  atomic/atomic_common.h atomic/atomic_native.h atomic/atomic_x86.h \
  cfg/../mem/shm_mem.h cfg/../mem/shm.h cfg/../mem/memapi.h \
  cfg/../mem/src_loc.h cfg/../mem/meminfo.h cfg/../mem/memdbg.h \
  cfg/../mem/../lock_ops.h fastlock.h sched_yield.h cfg/../locking.h \
  lock_alloc.h mem/mem.h cfg/../mem/../config.h types.h cfg/../mem/pkg.h \
  mem/shm_mem.h cfg/../bit_test.h pt.h globals.h ip_addr.h ut.h \
  comp_defs.h poll_types.h socket_info.h)
