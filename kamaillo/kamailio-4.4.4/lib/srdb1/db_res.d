db_res.o: $(wildcard  db_res.c db_res.h db_key.h ../../ut.h ../../comp_defs.h \
  ../../compiler_opt.h ../../config.h ../../types.h ../../dprint.h \
  ../../cfg_core.h ../../cfg/cfg.h ../../cfg/../str.h ../../mem/mem.h \
  ../../mem/pkg.h ../../mem/memapi.h ../../mem/src_loc.h \
  ../../mem/meminfo.h ../../mem/memdbg.h ../../mem/shm_mem.h \
  ../../mem/shm.h ../../mem/../lock_ops.h ../../fastlock.h \
  ../../sched_yield.h db_val.h db_con.h db_row.h)
