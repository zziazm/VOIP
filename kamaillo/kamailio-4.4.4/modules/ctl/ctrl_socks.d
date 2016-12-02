ctrl_socks.o: $(wildcard  ctrl_socks.c ctrl_socks.h ../../ip_addr.h ../../str.h \
  ../../compiler_opt.h ../../ut.h ../../comp_defs.h ../../config.h \
  ../../types.h ../../dprint.h ../../cfg_core.h ../../cfg/cfg.h \
  ../../mem/mem.h ../../mem/pkg.h ../../mem/memapi.h ../../mem/src_loc.h \
  ../../mem/meminfo.h ../../mem/memdbg.h ../../mem/shm_mem.h \
  ../../mem/shm.h ../../mem/../lock_ops.h ../../fastlock.h \
  ../../sched_yield.h init_socks.h fifo_server.h ctl.h)
