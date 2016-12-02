db_row.o: $(wildcard  db_row.c db_row.h db_val.h db_con.h ../../str.h db_res.h \
  db_key.h ../../ut.h ../../comp_defs.h ../../compiler_opt.h \
  ../../config.h ../../types.h ../../dprint.h ../../cfg_core.h \
  ../../cfg/cfg.h ../../mem/mem.h ../../mem/pkg.h ../../mem/memapi.h \
  ../../mem/src_loc.h ../../mem/meminfo.h ../../mem/memdbg.h \
  ../../mem/shm_mem.h ../../mem/shm.h ../../mem/../lock_ops.h \
  ../../fastlock.h ../../sched_yield.h)
