cfg/cfg.o: $(wildcard  cfg/cfg.c cfg/../ut.h cfg/../comp_defs.h cfg/../compiler_opt.h \
  cfg/../config.h cfg/../types.h cfg/../dprint.h cfg/../cfg_core.h \
  cfg/../cfg/cfg.h cfg/../str.h cfg/../mem/mem.h cfg/../mem/pkg.h \
  cfg/../mem/memapi.h cfg/../mem/src_loc.h cfg/../mem/meminfo.h \
  cfg/../mem/memdbg.h cfg/../mem/shm_mem.h cfg/../mem/shm.h \
  cfg/../mem/../lock_ops.h cfg/../fastlock.h cfg/../sched_yield.h \
  cfg/cfg_struct.h cfg/../atomic_ops.h cfg/../atomic/atomic_common.h \
  cfg/../atomic/atomic_native.h cfg/../atomic/atomic_x86.h \
  cfg/../locking.h cfg/../lock_alloc.h cfg/../bit_test.h cfg/cfg_ctx.h \
  cfg/cfg_script.h)
